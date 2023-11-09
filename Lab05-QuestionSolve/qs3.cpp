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

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Number of even elements = " << evenCount
         << "\nNumber of odd elements = " << oddCount;
}