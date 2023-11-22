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

    bool foundRepeated;
    cout << "Non-repeated elements: ";
    for (int i = 0; i < n; i++)
    {
        foundRepeated = false;

        // Check for duplicates in the array
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                foundRepeated = true;
                break;
            }
        }

        // If no duplicates found, print the element
        if (!foundRepeated)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}