#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    int j = 0, arr[n], arr2[n];
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

    cout << "Old array: ";
    printArray(arr, n);

    arr[0] = item1;     // Insert first position
    arr[n - 1] = item2; // Insert last position

    cout << "New array: ";
    printArray(arr, n);
    return 0;
}