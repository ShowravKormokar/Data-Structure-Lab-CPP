#include <iostream>
using namespace std;

void charMatching()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    char arr[n];
    cout << "Enter the " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    char sch;
    bool isFound = false;
    cout << "Enter the searching character: ";
    cin >> sch;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == sch)
        {
            cout << arr[i] << " is found. Index =" << i << "\n";
            isFound = true;
            break;
        }
    }

    if (isFound == false)
    {
        cout << "Not found.\n";
    }
}

void maxNum()
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

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum number is " << max << endl;
}

void minNum()
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

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum number is " << min << endl;
}

int main()
{
    cout << "1. Character Matching\n2. Maximum number finding\n3. Minimum number finding\nChoose an option: ";
    int chn;
    cin >> chn;

    if (chn == 1)
    {
        charMatching();
    }
    else if (chn == 2)
    {
        maxNum();
    }
    else if (chn == 3)
    {
        minNum();
    }
    else
    {
        cout << "Wrong input!\n";
    }
}