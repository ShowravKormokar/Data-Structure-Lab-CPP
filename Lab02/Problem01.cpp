// Insert item from a Linear Array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int position, item;
    cout << "Enter the position where you wish to insert element: ";
    cin >> position;
    cout << "Enter the item: ";
    cin >> item;

    if (position <= n)
    {
        for (int i = n; i >= position - 1; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[position - 1] = item; // Insert new element of given position

        cout << "New array: ";
        for (int i = 0; i < n + 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Insertion not possible.\n";
    }
    return 0;
}