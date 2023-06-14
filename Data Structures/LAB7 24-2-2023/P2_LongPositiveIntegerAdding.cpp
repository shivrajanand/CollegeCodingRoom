#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class CircularDoublyLinkedList
{
private:
    Node *header;

public:
    CircularDoublyLinkedList()
    {
        header = new Node(-1);
        header->prev = header;
        header->next = header;
    }

    ~CircularDoublyLinkedList()
    {
        Node *current = header->next;
        while (current != header)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
        delete header;
    }

    void insertDigit(int digit)
    {
        Node *newNode = new Node(digit);
        Node *lastNode = header->prev;

        newNode->prev = lastNode;
        newNode->next = header;
        lastNode->next = newNode;
        header->prev = newNode;
    }

    void display()
    {
        Node *current = header->next;
        while (current != header)
        {
            cout << current->data;
            current = current->next;
        }
        cout << "\n";
    }

    CircularDoublyLinkedList addLists(CircularDoublyLinkedList &list2)
    {
        CircularDoublyLinkedList result;

        Node *current1 = header->prev;
        Node *current2 = list2.header->prev;

        int carry = 0;

        while (current1 != header || current2 != list2.header)
        {
            int sum = carry;

            if (current1 != header)
            {
                sum += current1->data;
                current1 = current1->prev;
            }

            if (current2 != list2.header)
            {
                sum += current2->data;
                current2 = current2->prev;
            }

            result.insertDigit(sum % 10);
            carry = sum / 10;
        }

        if (carry != 0)
        {
            result.insertDigit(carry);
        }

        return result;
    }
};

int main()
{
    CircularDoublyLinkedList list1;
    list1.insertDigit(9);
    list1.insertDigit(2);
    list1.insertDigit(4);
    cout<<"First number: ";
    list1.display();

    CircularDoublyLinkedList list2;
    list2.insertDigit(1);
    list2.insertDigit(8);
    list2.insertDigit(7);
    cout<<"Second number: ";
    list2.display();

    CircularDoublyLinkedList sumList = list1.addLists(list2);

    cout << "Sum: ";

    sumList.display();

    return 0;
}
