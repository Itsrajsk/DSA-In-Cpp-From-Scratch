// Is Binary Tree Heap

#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isCBT(Node *root, int index, int cnt)
{
    if (root == NULL)
    {
        return true;
    }
    if (index >= cnt)
    {
        return false;
    }
    else
    {
        bool left = isCBT(root->left, 2 * index + 1, cnt);
        bool right = isCBT(root->right, 2 * index + 2, cnt);
        return (left && right);
    }
}

bool isMaxOrder(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    if (root->right == NULL)
    {
        return (root->data >= root->left->data);
    }
    else
    {
        bool left = isMaxOrder(root->left);
        bool right = isMaxOrder(root->right);

        return (left && right && (root->data >= root->left->data && root->data >= root->right->data));
    }
}

bool isHeap(Node *tree)
{
    int index = 0;
    int totalCount = countNodes(tree);
    if (isCBT(tree, index, totalCount) && isMaxOrder(tree))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Function to print the result
void printResult(Node *tree)
{
    if (isHeap(tree))
    {
        cout << "The binary tree is a heap." << endl;
    }
    else
    {
        cout << "The binary tree is not a heap." << endl;
    }
}

int main()
{
    // Test cases
    Node *root1 = new Node(10);
    root1->left = new Node(5);
    root1->right = new Node(7);

    cout << "Test case 1:" << endl;
    printResult(root1); // Should output "The binary tree is a heap."

    Node *root2 = new Node(10);
    root2->left = new Node(15);
    root2->right = new Node(20);

    cout << "\nTest case 2:" << endl;
    printResult(root2); // Should output "The binary tree is not a heap."

    Node *root3 = new Node(20);
    root3->left = new Node(15);
    root3->right = new Node(10);
    root3->left->left = new Node(12);
    root3->left->right = new Node(14);
    root3->right->left = new Node(8);

    cout << "\nTest case 3:" << endl;
    printResult(root3); // Should output "The binary tree is a heap."

    return 0;
}
