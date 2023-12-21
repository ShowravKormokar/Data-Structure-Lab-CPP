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

// Node* deleteInBST(Node* root, int key)
// {
//     if(key < root->data)
//     {
//         root->left = deleteInBST(root->left, key);
//     }
//     if(key> root->data)
//     {
//         root->right = deleteInBST(root->right, key);
//     }
//     else{
//         if(root->left == NULL)
//         {
//             Node* temp = root -> right;
//             free(root);
//             return temp;
//         }
//         else if(root->right == NULL)
//         {
//             Node * temp = root->right;
//             free(root);
//             return temp;
//         }

//         //case 3
//         Node* temp = inorderSucc(root->right);
//         root->data = temp->data;
//         root->right = deleteInBST(root->right, temp->key);
//     }
//     return root;
// }

Node *searchInBST(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }

    // Data > key
    if (root->data > key)
    {
        return searchInBST(root->left, key);
    }
    else // Either Data < key
    {
        return searchInBST(root->right, key);
    }
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
    // root = insertBST(root, 5);
    // insertBST(root, 1);
    // insertBST(root, 2);
    // insertBST(root, 3);
    // insertBST(root, 4);
    // insertBST(root, 7);

    // User input
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

    // Print postorder
    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    // Searching in Binary Search Tree
    int key;
    cout << "Enter a searching key: ";
    cin >> key;
    if (searchInBST(root, key) == NULL)
    {
        cout << "Key doesn't exist";
    }
    else
    {
        cout << "Key exists";
    }
}