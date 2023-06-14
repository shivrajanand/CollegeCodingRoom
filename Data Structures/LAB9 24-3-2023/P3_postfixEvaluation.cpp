#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <math.h>

using namespace std;

// Tree node structure
struct TreeNode {
    char data;
    TreeNode* left;
    TreeNode* right;
};

// Function to create a new tree node
TreeNode* createNode(char data) {
    TreeNode* newNode = new TreeNode();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to build a postfix expression tree
TreeNode* buildExpressionTree(const string& postfix) {
    stack<TreeNode*> st;

    for (char ch : postfix) {
        if (isalnum(ch)) {
            TreeNode* node = createNode(ch);
            st.push(node);
        } else {
            TreeNode* op2 = st.top();
            st.pop();
            TreeNode* op1 = st.top();
            st.pop();

            TreeNode* node = createNode(ch);
            node->left = op1;
            node->right = op2;

            st.push(node);
        }
    }

    TreeNode* root = st.top();
    st.pop();

    return root;
}

// Function to evaluate the expression tree
int evaluateExpressionTree(TreeNode* root) {
    if (!root)
        return 0;

    if (!root->left && !root->right)
        return root->data - '0';

    int leftVal = evaluateExpressionTree(root->left);
    int rightVal = evaluateExpressionTree(root->right);

    switch (root->data) {
        case '+':
            return leftVal + rightVal;
        case '-':
            return leftVal - rightVal;
        case '*':
            return leftVal * rightVal;
        case '/':
            return leftVal / rightVal;
        case '^':
            return pow(leftVal, rightVal);
        default:
            return 0;
    }
}

int main() {
    string postfixExpression = "83+5*7/";
    TreeNode* root = buildExpressionTree(postfixExpression);

    cout << "Postfix Expression Tree evaluated result: " << evaluateExpressionTree(root) << endl;

    return 0;
}
