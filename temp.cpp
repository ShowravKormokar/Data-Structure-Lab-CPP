#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(1);
    root->right = new Node(6);
    root->left->left = new Node(0);
    root->left->right = new Node(3);
    root->right->right = new Node(7);

    inorder(root);
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number of elements in an array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter the " << n << " elements:\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter [" << i << "] element: ";
//         cin >> arr[i];
//     }

//     int duplicateCount = 0;

//     for (int i = 0; i < n - 1; i++)
//     {
//         bool isDuplicate = false;
//         if (arr[i] != -1)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     isDuplicate = true;
//                     arr[j] = -1; // Mark the duplicate as visited to avoid recounting
//                 }
//             }
//             if (isDuplicate)
//             {
//                 duplicateCount++;
//             }
//         }
//     }

//     cout << "Total Unique Duplicate number: " << duplicateCount << endl;
//     return 0;
// }

// #include <iostream>
// #include <stack>
// using namespace std;

// // Function to partition the array and return the pivot index
// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high];
//     int i = (low - 1);

//     for (int j = low; j <= high - 1; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return (i + 1);
// }

// // Function to implement Quick Sort using iteration
// void quickSort(int arr[], int low, int high)
// {
//     stack<pair<int, int>> stk;
//     stk.push(make_pair(low, high));

//     while (!stk.empty())
//     {
//         low = stk.top().first;
//         high = stk.top().second;
//         stk.pop();

//         int pivot = partition(arr, low, high);

//         if (pivot - 1 > low)
//         {
//             stk.push(make_pair(low, pivot - 1));
//         }
//         if (pivot + 1 < high)
//         {
//             stk.push(make_pair(pivot + 1, high));
//         }
//     }
// }

// // Function to print the array
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     printArray(arr, n);

//     quickSort(arr, 0, n - 1);

//     cout << "Sorted array: ";
//     printArray(arr, n);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the number of elements in an array: ";
//     cin >> n;

//     int arr[n];
//     int firstLargeNum = 0, secondLargeNum = 0, thirdLargeNum = 0;
//     cout << "Enter the " << n << " elements: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] > firstLargeNum)
//         {
//             thirdLargeNum = secondLargeNum;
//             secondLargeNum = firstLargeNum;
//             firstLargeNum = arr[i];
//         }
//         else if (arr[i] > secondLargeNum)
//         {
//             thirdLargeNum = secondLargeNum;
//             secondLargeNum = arr[i];
//         }
//         else if (arr[i] > thirdLargeNum)
//         {
//             thirdLargeNum = arr[i];
//         }
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     // }

//     cout << "First largest number is: " << firstLargeNum << "\nSecond largest number is: " << secondLargeNum << "\nThird largest number is: " << thirdLargeNum << endl;

//     return 0;
// }
