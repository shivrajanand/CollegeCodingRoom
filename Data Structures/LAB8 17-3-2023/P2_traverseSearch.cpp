#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Pre-order traversal to create the binary tree during compile time
Node *createBinaryTree()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    return root;
}

void inOrderTraversal(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    inOrderTraversal(root->left);  // Recursive call on the left subtree
    cout << root->data << " ";     // Process the current node
    inOrderTraversal(root->right); // Recursive call on the right subtree
}

Node *search(Node *root, int target)
{
    if (root == nullptr || root->data == target)
    {
        return root;
    }

    if (target < root->data)
    {
        return search(root->left, target);
    }
    else
    {
        return search(root->right, target);
    }
}

int main()
{
    Node *root = createBinaryTree();

    cout << "Inorder Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    int target;
    cout << "Enter item to search for: ";
    cin >> target;

    // Node *result = search(root, target);
    // if (result != nullptr)
    // {
    //     cout << "Item found in the tree." << endl;
    // }
    // else
    // {
    //     cout << "Item not found in the tree." << endl;
    // }
    (search(root, target) != nullptr)?cout << "Item found in the tree." << endl:  cout << "Item not found in the tree." << endl;
    return 0;
}
