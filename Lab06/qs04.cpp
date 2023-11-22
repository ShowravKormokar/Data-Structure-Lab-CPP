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
    int count = 0;
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

        // If no duplicates found, count the element
        if (!foundRepeated)
        {
            count++;
        }
    }
    cout << "Unique element: " << count << endl;

    return 0;
}