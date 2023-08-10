#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int arr[n];
    cout << "Enter the " << n << " sorted element(s): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int search;
    bool isFound = false;
    cout << "Enter the searching number: ";
    cin >> search;

    int beg = 0, end = n - 1;

    for (int i = beg; i <= end; i++)
    {
        int mid = (beg + end) / 2;

        if (search == arr[mid])
        {
            cout << search << " is found at index " << mid << " .\n";
            isFound = true;
            break;
        }
        else if (search < arr[mid])
        {
            end = mid - 1;
        }
        else if (search > arr[mid])
        {
            beg = mid + 1;
        }
    }

    if (isFound == false)
    {
        cout << "Not found.\n";
    }
    return 0;
}