# Shivraj Anand
# Reg_no = 21105128029
# Date : 20/1/2023
# Task : Write a program to implement stack to push, pop, display and check error conditions

import os

class Stack:
    def __init__(self, maxsize):
        self.max_size = maxsize
        self.list = []

    def overflow(self):
        if len(self.list) == self.max_size:
            return True
        return False

    def underflow(self):
        if len(self.list) == 0:
            return True
        return False

    def push(self):
        if self.overflow():
            print("STACK OVERFLOW! Cannot enter elements")
        else:
            value = input("Enter element: ")
            if len(value) != 1:
                print(
                    "Character allowed only. Input string has more than one characters")
            else:
                self.list.append(value)

    def pop(self):
        if self.underflow():
            print("STACK UNDERFLOW! Cannot pop from Stack")
        else:
            return self.list.pop()

    def display(self):
        print("[ ", end="")
        print(*self.list, sep=" | ", end="")
        print(" ]", end="")


def stack_loop(Stack):
    while True:
        input("Press Enter to continue\n")
        os.system("cls")
        print(
            "1.PUSH\n2.POP\n3.DISPLAY STACK\n4.CHECK UNDERFLOW\n5.CHECK OVERFLOW\n6.EXIT\n")
        choice = int(input("Enter between 1 to 6: "))
        if choice == 1:
            Stack.push()
        elif choice == 2:
            Stack.pop()
        elif choice == 3:
            Stack.display()
        elif choice == 4:
            if Stack.underflow():
                print("STACK UNDERFLOW")
            else:
                print("There are elements in list! No underflow condition")
        elif choice == 5:
            if Stack.overflow():
                print("STACK OVERFLOW")
            else:
                print("The Stack is not full! No Overflow condition")

        elif choice == 6:
            exit()
        else:
            print("Wrong Choice")


if __name__ == '__main__':
    n = int(input("Enter size of stack: "))
    mystack = Stack(n)
    stack_loop(mystack)
