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

    int evenArr[n];
    int oddArr[n];
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    cout << "Even elements array:" << endl;
    for (int i = 0; i < evenCount; ++i)
    {
        cout << evenArr[i] << " ";
    }
    cout << endl;

    cout << "Odd elements array:" << endl;
    for (int i = 0; i < oddCount; ++i)
    {
        cout << oddArr[i] << " ";
    }
    cout << endl;

    return 0;
}
