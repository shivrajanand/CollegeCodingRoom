#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* createBinaryTree() {
    int data;
    cout << "Enter node data (or -1 to exit): ";
    cin >> data;

    if (data == -1) {
        return nullptr; // Base case for recursion
    }

    Node* newNode = new Node(data);

    cout << "Enter left child of " << data << ": ";
    newNode->left = createBinaryTree(); // Recursive call to create left subtree

    cout << "Enter right child of " << data << ": ";
    newNode->right = createBinaryTree(); // Recursive call to create right subtree

    return newNode;
}

int main() {
    Node* root = createBinaryTree();

    return 0;
}