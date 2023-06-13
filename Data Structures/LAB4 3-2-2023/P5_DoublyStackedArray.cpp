// # Shivraj Anand
// # Reg_no = 21105128029
// # Date : 3/2/2023
// # Task : Write a program to implement two stacks in an array

#include <iostream>

class DoublyStack {
private:
    int* arr;    // Array to store the elements
    int size;    // Size of the array
    int top1;    // Top index of stack 1
    int top2;    // Top index of stack 2

public:
    DoublyStack(int capacity) {
        arr = new int[capacity];
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    ~DoublyStack() {
        delete[] arr;
    }

    // Push an element onto stack 1
    void push1(int data) {
        if (top1 < top2 - 1) {
            arr[++top1] = data;
        } else {
            std::cout << "Stack 1 overflow!\n";
        }
    }

    // Push an element onto stack 2
    void push2(int data) {
        if (top1 < top2 - 1) {
            arr[--top2] = data;
        } else {
            std::cout << "Stack 2 overflow!\n";
        }
    }

    // Pop an element from stack 1
    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        } else {
            std::cout << "Stack 1 is empty!\n";
            return -1;
        }
    }

    // Pop an element from stack 2
    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        } else {
            std::cout << "Stack 2 is empty!\n";
            return -1;
        }
    }

    // Display all elements in both stacks
    void display() {
        std::cout << "Elements in Stack 1: ";
        for (int i = top1; i >= 0; --i) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";

        std::cout << "Elements in Stack 2: ";
        for (int i = top2; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    DoublyStack mystack(5);

    mystack.push1(10);
    mystack.push2(20);
    mystack.push1(30);
    mystack.push2(40);
    mystack.push2(50);

    mystack.display();

    mystack.pop1();
    mystack.pop2();

    mystack.display();

    return 0;
}

