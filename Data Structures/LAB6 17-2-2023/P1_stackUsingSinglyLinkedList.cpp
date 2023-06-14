#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    ~Stack()
    {
        while (top != nullptr)
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    bool isEmpty()
    {
        return (top == nullptr);
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow!\n";
            return -1;
        }

        Node *temp = top;
        int poppedValue = top->data;
        top = top->next;
        delete temp;

        return poppedValue;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!\n";
            return -1;
        }

        return top->data;
    }
};

int main()
{
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << "\n";
    cout << stack.pop() << "\n";
    cout << stack.peek() << "\n";

    cout << stack.isEmpty() << "\n";

    return 0;
}
