#include <bits/stdc++.h>

using namespace std;

class Item
{
public:
    int value, weight, r, x, id;

    void setter(int v, int w, int i)
    {
        value = v;
        weight = w;
        r = v / w;
        x = 0;
        id = i;
    }
};

bool compare(Item a, Item b)
{
    return a.r > b.r;
}

int main()
{
    int i, TW, v, w, n;

    cout << "How many items? ";
    cin >> n;
    cout << "Enter total weight: ";
    cin >> TW;

    Item arr[n];

    //input
    cout << "Plz enter information of each item in separate line (weight value): \n";
    for(i=0; i<n; i++)
    {
        cin >> w >> v;
        arr[i].setter(v, w, i+1);
    }

    sort(arr, arr+n, compare);

    int selectedItem = 0, currentWeight = 0, profit = 0;
    while(selectedItem < n && currentWeight < TW)
    {
        int a = min(arr[selectedItem].weight, TW - currentWeight); //this will ensure no overflow
        arr[selectedItem].x = a;
        profit += a * arr[selectedItem].r;

        currentWeight += a;
        selectedItem++;
    }

    cout << "Total profit = " << profit;
    cout << endl;
    for(i=0; i<n; i++)
    {
        cout << "Item " << arr[i].id << " = " << arr[i].x << "kg.\n";
    }


    return 0;
}
