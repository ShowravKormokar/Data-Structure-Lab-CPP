#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int firstLargeNum = 0, secondLargeNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > firstLargeNum)
        {
            secondLargeNum = firstLargeNum;
            firstLargeNum = arr[i];
        }
        else if (arr[i] > secondLargeNum)
        {
            secondLargeNum = arr[i];
        }
    }

    cout << "First largest number is: " << firstLargeNum << "\nSecond largest number is: " << secondLargeNum << endl;

    return 0;
}
