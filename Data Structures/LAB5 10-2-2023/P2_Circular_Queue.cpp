#include <iostream>
#include <cstring>

using namespace std;

class CircularQueue
{
private:
    string *queue;
    int front;
    int rear;
    int MAX_SIZE;

public:
    CircularQueue(int size)
    {
        MAX_SIZE = size;
        queue = new string[MAX_SIZE];
        front = -1;
        rear = -1;
    }

    bool isFull()
    {
        return (front == 0 && rear == MAX_SIZE - 1) || (rear == (front - 1));
    }

    bool isEmpty()
    {
        return front == -1;
    }

    void enqueue(string data)
    {
        if (isFull())
        {
            cout << "Queue is full!" << endl;
        }
        else
        {
            rear++;
            if ((rear == MAX_SIZE) && (front != 0))
                rear = 0;
            queue[rear] = data;
            cout << data << " inserted into queue." << endl;
            if (front == -1)
            {
                front = 0;
            }
        }
    }

    string dequeue()
    {
        string str;
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            str = queue[front];
            cout << str << " deleted from queue." << endl;
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1);
            }
        }
        return str;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << "Elements in circular queue are: " << endl;
            if (rear >= front)
            {
                for (int i = front; i <= rear; i++)
                {
                    cout << queue[i] << ", ";
                }
            }
            else
            {
                for (int i = front; i < MAX_SIZE; i++)
                {
                    cout << queue[i] << " ";
                }
                for (int i = 0; i <= rear; i++)
                {
                    cout << queue[i] << " ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    CircularQueue newq(5);
    newq.display();
    newq.enqueue("first");
    newq.enqueue("second");
    newq.display();
    newq.dequeue();
    newq.display();
    newq.enqueue("third");
    newq.enqueue("fourth");
    newq.enqueue("fifth");
    // cout << "rear = " << newq.rear << " front= " << newq.front << endl;
    newq.enqueue("sixth");
    // cout << "rear = " << newq.rear << " front= " << newq.front << endl;
    newq.enqueue("seventh");
    // cout << "rear = " << newq.rear << " front= " << newq.front << endl;
    newq.enqueue("eighth");
    newq.display();
    return 0;
}
