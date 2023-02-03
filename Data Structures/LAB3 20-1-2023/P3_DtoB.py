# Shivraj Anand
# Reg_no = 21105128029
# Date : 20/1/2023
# Task : Write a program to convert decimal number to binary number

class Stack ():
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

    def size(self):
        return len(self.items)


if __name__ == '__main__':
    s1 = Stack()
    decNum = int(input("Enter the decimal num: "))
    while decNum != 0:
        newNum = decNum % 2
        decNum = int(decNum/2)
        s1.push(newNum)
    while s1.size() != 0:
        a = s1.pop()
        print(str(a), end="")
