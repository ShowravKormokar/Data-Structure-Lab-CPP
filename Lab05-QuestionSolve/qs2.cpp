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

    int largeNum1, largeNum2;

    if (arr[0] > arr[1])
    {
        largeNum1 = arr[0];
        largeNum2 = arr[1];
    }
    else
    {
        largeNum1 = arr[1];
        largeNum2 = arr[0];
    }

    // int max = arr[0];
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largeNum1)
        {
            largeNum2 = largeNum1;
            largeNum1 = arr[i];
        }
        else if (arr[i] > largeNum2 && arr[i] != largeNum1)
        {
            largeNum2 = arr[i];
        }
    }
    cout << "Large number1 = " << largeNum1 << endl;
    cout << "Large number2 = " << largeNum2 << endl;
}