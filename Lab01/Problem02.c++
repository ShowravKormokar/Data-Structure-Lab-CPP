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

    int sch;
    bool isFound = false;
    cout << "Enter the searching number: ";
    cin >> sch;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == sch)
        {
            cout << arr[i] << " is found.\n";
            isFound = true;
            break;
        }
    }

    if (isFound == false)
    {
        cout << "Not found.\n";
    }
}