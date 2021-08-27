//Structures & Union 
//
// C program to illustrate differences
// between structure and Union
#include <stdio.h>
#include <string.h>

// declaring structure
struct struct_example
{
	int integer;
	float decimal;
	char name[20];
};

// declaring union

union union_example
{
	int integer;
	float decimal;
	char name[20];
};

int main()
{
	struct struct_example s = { 18,38,"geeksforgeeks" };
	union union_example u = { 18,38,"geeksforgeeks" };

	// difference two and three
	printf("\nsizeof structure : %d\n", sizeof(s));
	printf("sizeof union : %d\n", sizeof(u));

	return 0;
}
