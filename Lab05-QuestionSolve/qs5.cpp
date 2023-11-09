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

    int item1, item2;
    cout << "Enter the item1: ";
    cin >> item1;
    cout << "Enter the item2: ";
    cin >> item2;

    for (int i = n; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = item1;     // Insert new element
    arr[n-1] = item2; // Insert new element

    // n = n + 2;

    cout << "New array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}