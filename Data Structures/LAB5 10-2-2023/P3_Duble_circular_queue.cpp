#include <iostream>
using namespace std;

class DoubleCircularQueue
{
private:
    int *arr;
    int front1, rear1, front2, rear2, size1, size2, capacity;

public:
    DoubleCircularQueue(int capacity)
    {
        arr = new int[capacity];
        capacity = capacity;
        size1 = 0;
        size2 = 0;
        front1 = rear1 = -1;
        front2 = rear2 = capacity;
    }

    bool isEmpty1()
    {
        return (front1 == -1 && rear1 == -1);
    }

    bool isEmpty2()
    {
        return (front2 == capacity && rear2 == capacity);
    }

    bool isFull1()
    {
        return ((rear1 + 1) == front1);
    }

    bool isFull2()
    {
        return ((rear2 - 1) == front2);
    }

    // int capacity
    // {
    //     return rear2 - front1 - 1;
    // }

    void enqueue1(int data)
    {
        if (isFull1())
        {
            cout << "Queue 1 is full" << endl;
            return;
        }
        else if (isEmpty1())
        {
            front1 = rear1 = 0;
        }
        else
        {
            rear1 = (rear1 + 1);
        }
        arr[rear1] = data;
        size1++;
    }

    void enqueue2(int data)
    {
        if (isFull2())
        {
            cout << "Queue 2 is full" << endl;
            return;
        }
        else if (isEmpty2())
        {
            front2 = rear2 = capacity - 1;
        }
        else
        {
            rear2 = (rear2 - 1);
        }
        arr[rear2] = data;
        size2++;
    }

    int dequeue1()
    {
        if (isEmpty1())
        {
            cout << "Queue 1 is empty" << endl;
            return -1;
        }
        int data = arr[front1];
        if (front1 == rear1)
        {
            front1 = rear1 = -1;
        }
        else
        {
            front1 = (front1 + 1);
        }
        size1--;
        return data;
    }

    int dequeue2()
    {
        if (isEmpty2())
        {
            cout << "Queue 2 is empty" << endl;
            return -1;
        }
        int data = arr[front2];
        if (front2 == rear2)
        {
            front2 = rear2 = capacity;
        }
        else
        {
            front2 = (front2 - 1);
        }
        size2--;
        return data;
    }

    void display1()
    {
        if (isEmpty1())
        {
            cout << "Queue 1 is empty" << endl;
            return;
        }
        for (int i = front1; i <= rear1; i = (i + 1))
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void display2()
    {
        if (isEmpty2())
        {
            cout << "Queue 2 is empty" << endl;
            return;
        }
        for (int i = front2; i >= rear2; i = (i - 1))
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // ~DoubleCircularQueue()
    // {
    //     delete[] arr;
    // }
};

int main()
{
    DoubleCircularQueue q(10);

    q.enqueue1(1);
    q.enqueue1(2);
    q.enqueue1(3);
    q.enqueue2(4);
    q.enqueue2(5);
    q.enqueue2(6);

    q.display1();
    q.display2();

    cout << "Dequeue1: " << q.dequeue1() << endl;
    cout << "Dequeue2: " << q.dequeue2() << endl;

    q.display1();
    q.display2();

    q.enqueue1(7);
    q.enqueue2(8);

    q.display1();
    q.display2();

    return 0;
}
