#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value){
        this->data = value;
        left=NULL;
        right=NULL;
    }
};

// Function to check if two trees are equal
bool areTreesEqual(Node *root1, Node *root2)
{
    if (root1 == nullptr && root2 == nullptr)
    {
        return true;
    }

    if (root1 == nullptr || root2 == nullptr)
    {
        return false;
    }

    return (root1->data == root2->data) &&
           areTreesEqual(root1->left, root2->left) &&
           areTreesEqual(root1->right, root2->right);
}

int main()
{
    // First binary tree
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);

    // Second binary tree
    Node *root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);

    // Check if the trees are equal
    if (areTreesEqual(root1, root2))
    {
        cout << "The trees are equal." << endl;
    }
    else
    {
        cout << "The trees are not equal." << endl;
    }

    return 0;
}
