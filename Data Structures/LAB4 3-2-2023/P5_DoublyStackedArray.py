# Shivraj Anand
# Reg_no = 21105128029
# Date : 3/2/2023
# Task : Write a program to implement two stacks in an array

import os
import math

class DoubleStack:
    def __init__(self, n):
        self.size = n
        self.stack = [None]*n
        self.top1 = 0
        self.top2 = self.size-1

    def underflow(self):
        if (self.top1 == 0) and (self.top2 == self.size-1):
            return True
        else:
            return False

    def overflow(self):
        if self.top2 < self.top1:
            return True
        else:
            return False

    def push1(self):
        if self.top1 != int((self.size/2)):
            self.stack[self.top1] = input("Enter element: ")
            self.top1 += 1
        else:
            print("Stack is full!")

    def push2(self):
        if self.top2 != (int(self.size/2)-1):
            self.stack[self.top2] = input("Enter element: ")
            self.top2 -= 1
        else:
            print("Stack is full!")

    def pop1(self):
        if self.top1 != 0:
            self.top1 -= 1
            self.stack[self.top1] = None
        else:
            print("No element present!")

    def pop2(self):
        if self.top2 != (self.size-1):
            self.top2 += 1
            self.stack[self.top2] = None
        else:
            print("No element present!")

    def displayStack(self):
        print(*self.stack, sep=" | ")


def stackloop(DoubleStack):
    mydict = {1: "Underflow", 2: "Overflow", 3: "Push1", 4: "Push2",
              5: "Pop1", 6: "Pop2", 7: "DisplayStack", 8: "Exit"}
    while True:
        input("\n\nPress Enter to continue! ")
        os.system("cls")

        for key, value in mydict.items():
            print(f"{key}>>{value}")

        choice = int(input("Enter between 1 to 8: "))

        if choice == 1:
            if DoubleStack.underflow():
                print("UNDERFLOW!")
            else:
                print("No Underflow")

        elif choice == 2:
            if DoubleStack.overflow():
                print("OVERFLOW!")
            else:
                print("No Overflow")

        elif choice == 3:
            DoubleStack.push1()

        elif choice == 4:
            DoubleStack.push2()

        elif choice == 5:
            DoubleStack.pop1()

        elif choice == 6:
            DoubleStack.pop2()

        elif choice == 7:
            DoubleStack.displayStack()

        elif choice == 8:
            exit(0)

        else:
            print("Wrong Choice!")


if __name__ == "__main__":
    n = int(input("Enter size of stack: "))
    mystack = DoubleStack(n)
    stackloop(mystack)
