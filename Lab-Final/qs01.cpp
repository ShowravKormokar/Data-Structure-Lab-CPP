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

Node *insertBST(Node *root, int value)
{
    if (root == NULL)
    {
        return new Node(value);
    }
    if (value < root->data)
    {
        root->left = insertBST(root->left, value);
    }
    else
    {
        root->right = insertBST(root->right, value);
    }

    return root;
}

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

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;

    int input;
    cout << "Enter numbers to insert into the Binary Search Tree (-1 to stop):\n";
    while (true)
    {
        cin >> input;
        if (input == -1)
        {
            break;
        }
        root = insertBST(root, input);
    }

    // Print inorder
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    // Print preorder
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    // Print Postorder
    cout << "postorder Traversal: ";
    postorder(root);
    cout << endl;
}