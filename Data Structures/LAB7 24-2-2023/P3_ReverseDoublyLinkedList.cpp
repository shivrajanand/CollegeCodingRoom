#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string data;
    Node *prev;
    Node *next;

    Node(const string &value)
    {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList
{
private:
    Node *head;

public:
    DoublyLinkedList()
    {
        head = nullptr;
    }

    ~DoublyLinkedList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *temp = current;
            current = current->next;
            delete temp;
        }
    }

    void insert(const string &word)
    {
        Node *newNode = new Node(word);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }

    void reverse()
    {
        if (head == nullptr || head->next == nullptr)
        {
            return; // Empty list or single node, no need to reverse
        }

        Node *current = head;
        Node *prevNode = nullptr;

        while (current != nullptr)
        {
            Node *nextNode = current->next;
            current->next = prevNode;
            current->prev = nextNode;

            prevNode = current;
            current = nextNode;
        }

        head = prevNode;
    }
};

int main()
{
    DoublyLinkedList list;
    list.insert("Hi");
    list.insert("This");
    list.insert("is");
    list.insert("Shivraj");
    list.insert("Anand");

    cout << "Original List: ";
    list.display();

    list.reverse();

    cout << "Reversed List: ";
    list.display();

    return 0;
}
