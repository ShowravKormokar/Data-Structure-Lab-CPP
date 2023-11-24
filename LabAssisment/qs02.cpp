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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter searching item: ";
    int sch;
    cin >> sch;

    int beg = 0, end = n - 1;
    bool isFound = true;

    for (int i = beg; i <= end;)
    {
        int mid = (beg + end) / 2;

        if (arr[mid] == sch)
        {
            isFound = false;
            cout << "Item is found.\n";
            break;
        }
        else if (arr[mid] > sch)
        {
            beg = mid + 1;
        }
        else if (arr[mid] < sch)
        {
            end = mid - 1;
        }
    }

    if (isFound)
    {
        cout << "Item is not found.\n";
    }
}