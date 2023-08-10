// Delete item from a Linear Array

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

    int position;
    cout << "Enter the position where you wish to delete element: ";
    cin >> position;

    if (position <= n)
    {
        for (int i = position - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        cout << "New array (Deletion after 1 element): ";
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Deletion not possible.\n";
    }
    return 0;
}