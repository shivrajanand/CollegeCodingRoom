#include <iostream>
using namespace std;

class Queue
{
public:
    char *queue;
    int size;
    int rear;
    int front;
    Queue(int capacity)
    {
        size = capacity;
        queue = new char[size];
        front = -1;
        rear = -1;
    }

    int isNull()
    {
        if ((front == -1) && (rear == -1))
            return 1;
        return 0;
    }

    int isFull()
    {
        if (rear == size - 1)
            return 1;
        return 0;
    }
    int dequeue()
    {
        if (isNull())
        {
            cout << "Queue Underflow!" << endl;
        }
        else
        {
            char x = queue[front];
            cout << "DELETING " << x << endl;
            queue[front] = '\0';
            front++;
            return x;
        }
    }
    void enqueue(int c)
    {
        if (isFull())
        {
            cout << "Queue Overflow!" << endl;
        }
        else
        {
            cout << "INSERTING " << (char)c << endl;
            if (isNull())
            {
                front++;
                rear++;
                queue[rear] = c;
            }
            else
            {
                rear++;
                queue[rear] = c;
            }
        }
    }
    void display()
    {
        if ((front == -1) && (rear == -1))
            cout << "QUEUE EMPTY!" << endl;
        else
        {
            cout << "DISPLAYING" << endl;
            for (int i = front; i < rear + 1; i++)
                cout << queue[i] << ", ";
        }
        cout << endl;
    }
};

int main()
{
    Queue newq(5);
    newq.display();
    newq.enqueue('a');
    newq.enqueue('b');
    newq.display();
    newq.dequeue();
    newq.display();
    newq.enqueue('c');
    newq.enqueue('d');
    newq.enqueue('e');
    // cout << "rear = " << newq.rear << " front= " << newq.front << endl;
    newq.enqueue('f');
    // cout << "rear = " << newq.rear << " front= " << newq.front << endl;
    newq.enqueue('g');
    // cout << "rear = " << newq.rear << " front= " << newq.front << endl;
    newq.enqueue('h');
    newq.display();
    return 0;
}