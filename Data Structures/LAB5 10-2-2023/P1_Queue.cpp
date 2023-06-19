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
        // queue = new char[size];
        queue = (char *)calloc(size, sizeof(char));
        front = -1;
        rear = -1;
    }

    // int isNull()
    // {
    //     if ((front == -1) && (rear == -1))
    //         return 1;
    //     return 0;
    // }

    // int isFull()
    // {
    //     if (rear == size - 1)
    //         return 1;
    //     return 0;
    // }
    int deleteq()
    {
        if ((front == -1) && (rear == -1))
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
    void insertq(char c)
    {
        if (rear == size - 1)
        {
            cout << "Queue Overflow!" << endl;
        }
        else
        {
            cout << "INSERTING " << c << endl;
            if ((front == -1) && (rear == -1))
                front++;

            rear++;
            queue[rear] = c;
        }
    }
    void displayq()
    {
        if ((front == -1) && (rear == -1))
            cout << "QUEUE EMPTY!" << endl;
        else
        {
            cout << "DISPLAYING" << endl;
            // for (int i = front; i < rear + 1; i++)
            //     cout << queue[i] << ", ";

            for (int i = 0; i < size; i++)
                cout << queue[i] << ", ";
        }
        cout << endl;
    }
};

int main()
{
    Queue newq(5);
    newq.displayq();
    newq.insertq('a');
    newq.insertq('b');
    newq.displayq();
    newq.deleteq();
    newq.displayq();
    newq.insertq('c');
    newq.insertq('d');
    newq.insertq('e');
    newq.displayq();
    // cout << "rear = " << newq.rear << " front= " << newq.front << endl;
    newq.insertq('f');
    // cout << "rear = " << newq.rear << " front= " << newq.front << endl;
    // newq.insertq('g');
    // cout << "rear = " << newq.rear << " front= " << newq.front << endl;
    // newq.insertq('h');
    newq.displayq();
    return 0;
}