#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *leftChild;
    Node *rightChild;

    Node(int data)
    {
        this->data = data;
        leftChild = nullptr;
        rightChild = nullptr;
    }
};

class BinaryTree
{
private:
    Node *root;

public:
    BinaryTree()
    {
        root = nullptr;
    }

    void insert(int data)
    {
        root = insertRecursive(root, data);
    }

    Node *insertRecursive(Node *root, int data)
    {
        if (root == nullptr)
        {
            return new Node(data);
        }

        if (data < root->data)
        {
            root->leftChild = insertRecursive(root->leftChild, data);
        }
        else if (data > root->data)
        {
            root->rightChild = insertRecursive(root->rightChild, data);
        }

        return root;
    }

    Node *search(int data)
    {
        return searchRecursive(root, data);
    }

    Node *searchRecursive(Node *root, int data)
    {
        if (root == nullptr || root->data == data)
        {
            return root;
        }

        if (data < root->data)
        {
            return searchRecursive(root->leftChild, data);
        }

        return searchRecursive(root->rightChild, data);
    }

    void preOrderTraversal(Node *root)
    {
        if (root != nullptr)
        {
            cout << root->data << " ";
            preOrderTraversal(root->leftChild);
            preOrderTraversal(root->rightChild);
        }
    }

    void inOrderTraversal(Node *root)
    {
        if (root != nullptr)
        {
            inOrderTraversal(root->leftChild);
            cout << root->data << " ";
            inOrderTraversal(root->rightChild);
        }
    }

    void postOrderTraversal(Node *root)
    {
        if (root != nullptr)
        {
            postOrderTraversal(root->leftChild);
            postOrderTraversal(root->rightChild);
            cout << root->data << " ";
        }
    }

    void performSearch(int data)
    {
        Node *temp = search(data);

        if (temp != nullptr)
        {
            cout << "[" << temp->data << "] Element found." << endl;
        }
        else
        {
            cout << "[ x ] Element not found (" << data << ")." << endl;
        }
    }

    void traverseAndPrint()
    {
        cout << "Preorder traversal: ";
        preOrderTraversal(root);
        cout << endl;

        cout << "Inorder traversal: ";
        inOrderTraversal(root);
        cout << endl;

        cout << "Postorder traversal: ";
        postOrderTraversal(root);
        cout << endl;
    }
};

int main()
{
    int array[7] = {27, 14, 35, 10, 19, 31, 42};

    BinaryTree binaryTree;

    for (int i = 0; i < 7; i++)
    {
        binaryTree.insert(array[i]);
    }

    binaryTree.performSearch(31);
    binaryTree.performSearch(15);

    binaryTree.traverseAndPrint();

    return 0;
}
