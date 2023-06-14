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

class Queue
{
private:
    Node *header;
    Node *rear;

public:
    Queue()
    {
        header = new Node(-1); // Header node with a dummy value
        rear = header;
    }

    ~Queue()
    {
        while (header != nullptr)
        {
            Node *temp = header;
            header = header->next;
            delete temp;
        }
    }

    bool isEmpty()
    {
        return (header == rear);
    }

    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        rear->next = newNode;
        rear = newNode;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue underflow!\n";
            return -1;
        }

        Node *temp = header->next;
        int dequeuedValue = temp->data;
        header->next = temp->next;

        if (rear == temp)
        {
            rear = header;
        }

        delete temp;

        return dequeuedValue;
    }

    int front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!\n";
            return -1;
        }

        return header->next->data;
    }
};

int main()
{
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << queue.dequeue() << "\n";
    cout << queue.dequeue() << "\n";
    cout << queue.front() << "\n";

    cout << queue.isEmpty() << "\n";

    return 0;
}
