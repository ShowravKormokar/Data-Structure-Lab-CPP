#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Show elements in descending order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the searching item: ";
    int sch;
    cin >> sch;

    // Searching an item using binary search
    int beg = 0, end = n - 1, flag = 0;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;

        if (sch == arr[mid])
        {
            cout << "Item found. Location (start with 0 index)= " << mid << endl;
            flag++;
            break;
        }
        else if (sch > arr[mid])
        {
            end = mid - 1;
        }
        else if (sch < arr[mid])
        {
            beg = mid + 1;
        }
    }

    if (flag == 0)
    {
        cout << "Item is not found\n";
    }
}