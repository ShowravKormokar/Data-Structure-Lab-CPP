#include <iostream>
using namespace std;

const int maxStack = 10; 
int top = -1;            

int pushOperation(int stk[])
{
    int item;
    cin >> item;

    if (top == maxStack - 1)
    {
        return top;
    }
    top++;
    stk[top] = item;
    return top;
}

void showOperation(int stk[])
{
    // for (int i = top; i >= 0; i--)
    // {
    //     cout << stk[i] << " ";
    // }
    // cout << endl;

    while (top != -1)
    {
        cout << stk[top] << " ";
        top--;
    }
     cout << endl;
}

int main()
{
    int stk[maxStack];
    cout << "How many elements do you want to push into the stack: ";
    int n;
    cin >> n;

    cout << "Enter the elements: ";
    while (n != 0)
    {
        if (top == maxStack - 1)
        {
            cout << "Stack Overflow\n";
            break;
        }
        pushOperation(stk);
        n--;
    }
    cout << "Show elements: ";
    showOperation(stk);
}