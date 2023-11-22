#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter [" << i << "] element: ";
        cin >> arr[i];
    }

    int duplicateCount = 0;

    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                arr[j] = arr[j + 1];
                n--;
            }
        }
        if (isDuplicate)
        {
            duplicateCount++;
        }
    }

    cout << "Number of Duplicate elements : " << duplicateCount << endl;
    return 0;
}