#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in an array: ";
    cin >> n;

    int flag = 0, arr[n];
    cout << "Enter the " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Negetive element: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
            flag++;
        }
    }
    if (flag == 0)
        cout << "No negetive element found\n";
}