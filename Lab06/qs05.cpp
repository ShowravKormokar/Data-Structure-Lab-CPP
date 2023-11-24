#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) // j=1 2
    {
        if (arr[j] > pivot) // 6 > 4;
        {
            i++; // 1
            int temp = arr[i];
            arr[i] = arr[j]; // 5
            arr[j] = temp;   // 5
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high]; //
    arr[high] = temp;       // 2
    return i + 1;           // 4
}
void quickSort(int arr[], int low, int high) // 5 6 9 4 3 1 2//5694312
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high); // 4
        quickSort(arr, low, pivotIndex - 1);        // array left side sort, until it can not be sorted
        quickSort(arr, pivotIndex + 1, high);       // array right side sort, until it can not be sorted
    }
}
int main()
{
    cout << "enter element size: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "enter " << n << " Numbers:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout << "sorted array in ascending orders: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}