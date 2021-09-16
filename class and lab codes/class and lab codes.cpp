#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void sortnumbers(int a[], int size)
{
	int i, j, k;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			for (k = j + 1; k < i + 1; k++)
				if (a[k] < a[j])
				{
					int temp;
					temp = a[j];
					a[j] = a[k];
					a[k] = temp;
				}
		}
	}
}


int BinarySearch(const int a[], int size, int target)
{
	int mid, first = 0, last = size - 1;
	while (!(first > last))
	{
		mid = (first + last) / 2;
		if (a[mid] == target)
			return mid;
		else if (a[mid] < target)
			first = mid + 1;
		else if (a[mid] > target)
			last = mid - 1;
	}
	return -1;
}


int LinearSearch(const int a[], int size, int target)
{
	if (size < 0)
		return -1;
	else if (a[size] == target)
		return size;
	else
		return (LinearSearch(a, size - 1, target));
}




class Search
{
public:
	Search();
	Search(int size, int min, int max);
	Search(char filename[]);
	int find(int num);
private:
	int* p;
	int used;
	void generateData(int size);
	void generateData(int size, int min, int max);
	void fillInDataFromFile(string filename);
	void Sortnumbers(int used);
};

Search::Search()
{
	used = 100000;
	p = new int[used];
	for (int i = 0; i < used; i++)
		p[i] = rand() % 1000000;
}



Search::Search(int size, int min, int max)
{
	generateData(size, min, max);
}

Search::Search(char filename[])
{
	fillInDataFromFile(filename);
}

void Search::generateData(int size)
{
	used = size;
	p = new int[size];
	for (int i = 0; i < size; i++)
		p[i] = rand();
}

void Search::generateData(int size, int min, int max)
{
	used = size;
	p = new int[size];
	for (int i = 0; i < size; i++)
		p[i] = rand() % max + min;
}

void Search::fillInDataFromFile(string filename)
{
	ifstream input;
	int buffer;
	used = 0;
	input.open(filename.c_str());
	if (input.fail())
	{
		cout << "The file could not be opened.\nPress enter to exit.\n";
		exit(1);
	}
	input >> buffer;
	used++;
	while (!input.eof())
	{
		input >> buffer;
		used++;
	}
	input.close();
	ifstream input2;
	input2.open(filename.c_str());
	p = new int[used];
	for (int i = 0; i < used; i++)
	{
		input2 >> buffer;
		p[i] = buffer;
	}
}

void Search::Sortnumbers(int used)
{
	sortnumbers(p, used);
}

int Search::find(int num)

{
	Sortnumbers(used);
	clock_t start, finish;
	int j;
	start = clock();
	for (int i = 0; i < 10000; i++)
		j = BinarySearch(p, used, num);
	finish = clock();
	if (j != -1)
	{
		double time;
		time = ((finish - start) / CLOCKS_PER_SEC) / 10000.0;
		cout << "A binary search took: " << time << " seconds\n"; // it's going to output 0 or 1 second or something like that
																  // it's normal since it's CPU time, not wall clock time	 
	}
	else
		cout << "The target was not found.\n";
	clock_t start2, finish2;
	start2 = clock();
	for (int i = 0; i < 10000; i++)
		j = LinearSearch(p, used, num);
	finish2 = clock();
	if (j != -1)
	{
		double time2;
		time2 = ((finish2 - start2) / CLOCKS_PER_SEC) / 10000.0;		// likewise
		cout << "A linear search took: " << time2 << " seconds\n";
	}
	else
		cout << "The target was not found.\n";
	return j;
}

int main()
{
	Search S;
	char c;
	cout << "Type in the letter \"R\" to read from the existed file or \"G\" to generate random numbers instead:\n";
	cin >> c;
	if (c == 'r' || c == 'R')
	{
		char str[] = "Numbers.txt";
		Search F(str);
		int target;
		int location;
		cout << "Enter the number you are looking for.\n";
		cin >> target;
		location = F.find(target);
		if (location != -1)
			cout << "\nThe target is located at index " << location << endl;
	}
	else if (c == 'g' || c == 'G')
	{
		char response;
		cout << "Please provide a range for the generated numbers: ";
		int smallest, largest, length;
		cout << "Enter the minimum.\n";
		cin >> smallest;
		cout << "Enter the maximum.\n";
		cin >> largest;
		cout << "How many numbers to generate?\n";
		cin >> length;
		Search S(length, smallest, largest);
		int target;
		int location;
		cout << "Enter the target you want to search for.\n";
		cin >> target;
		location = S.find(target);
		if (location != -1)
			cout << "\nThe target is located at index " << location << endl;
	}
	else
		cout << "Your input is not recognized, session will end.\n";
	return 0;
}