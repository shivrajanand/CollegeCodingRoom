#include <iostream>
using namespace std;
class Node
{
public:
    char data;
    Node *next;

    Node(char value)
    {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList
{
private:
    Node *header;

public:
    CircularLinkedList()
    {
        header = new Node('\0'); // Header node with a dummy value
        header->next = header;   // Make the header node point to itself
    }

    ~CircularLinkedList()
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

    void insert(char data)
    {
        Node *newNode = new Node(data);
        Node *current = header->next;

        while (current->next != header && current->next->data < data)
        {
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;
    }

    void display()
    {
        Node *current = header->next;
        while (current != header)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }

    void mergeLists(CircularLinkedList &list1, CircularLinkedList &list2)
    {
        Node *current1 = list1.header->next;
        Node *current2 = list2.header->next;

        while (current1 != list1.header && current2 != list2.header)
        {
            if (current1->data <= current2->data)
            {
                insert(current1->data);
                current1 = current1->next;
            }
            else
            {
                insert(current2->data);
                current2 = current2->next;
            }
        }

        while (current1 != list1.header)
        {
            insert(current1->data);
            current1 = current1->next;
        }

        while (current2 != list2.header)
        {
            insert(current2->data);
            current2 = current2->next;
        }
    }
};

int main()
{
    CircularLinkedList list1;
    list1.insert('a');
    list1.insert('c');
    list1.insert('e');

    CircularLinkedList list2;
    list2.insert('b');
    list2.insert('d');
    list2.insert('f');

    CircularLinkedList mergedList;
    mergedList.mergeLists(list1, list2);

    cout << "Merged List: ";
    mergedList.display();

    return 0;
}
