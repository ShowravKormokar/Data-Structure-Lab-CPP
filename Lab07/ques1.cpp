#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    int flag = 0, arr[n];
    cout << "Enter elements ascending order : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter searching item: ";
    int sch, position;
    cin >> sch;

    int isFound = 0;
    for (int i = 0; i < n; i++)
    {
        if (sch == arr[i])
        {
            isFound = i;
            break;
        }
        if (arr[i] < sch)
        {
            position = i + 1;
        }
    }

    if (isFound != 0)
    {
        cout << "Item is found. Index= " << isFound << "\n";
    }
    else
    {
        cout << "Item is not found.\n";
        if (position <= n)
        {
            for (int i = n; i >= position; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[position] = sch; // Insert new element of given position

            cout << "Item inserted in sorted position. New array: ";
            for (int i = 0; i < n + 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}