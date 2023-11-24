#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    int flag = 0, arr[n];
    cout << "Enter the " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter searching item: ";
    int sch;
    cin >> sch;

    bool isFound = false;
    for (int i = 0; i < n; i++)
    {
        if (sch == arr[i])
        {
            isFound = true;
            break;
        }
    }

    if (isFound)
    {
        cout << "Item is found.\n";
    }
    else
    {
        cout << "Item is not found.\n";
        // Item insert
        arr[n] = sch;

        // Print the array
        cout << "Item inserted. New array: ";
        for (int i = 0; i < n + 1; i++)
        {
            cout << arr[i] << " ";
        }
    }
}