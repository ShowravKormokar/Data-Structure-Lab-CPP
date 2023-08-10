// Linear Search

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int arr[n];
    cout << "Enter the " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int search;
    bool isFound = false;
    cout << "Enter the searching number: ";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            cout << arr[i] << " is found at index " << i << " .\n";
            isFound = true;
            break;
        }
    }

    if (isFound == false)
    {
        cout << "Not found.\n";
    }
}