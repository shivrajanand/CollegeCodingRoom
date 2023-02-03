# Shivraj Anand
# Reg_no = 21105128029
# Date : 20/1/2023
# Task : Write a program to check palindrome using stack

class Stack:
    def __init__(self):
        self.list = []

    def push(self, data):
        self.list.append(data)

    def pop(self):
        return self.list.pop()


if __name__ == '__main__':
    word = input("Enter your string input: ")

    stringStack = Stack()

    for letter in word:
        stringStack.push(letter)

    reverseString = ""

    while len(stringStack.list) != 0:
        reverseString = reverseString + stringStack.pop()

    if (reverseString == word):
        print("The word is a palindrome")
    else:
        print("It's not a palindrome")
    print(f"Input = {word}\nReverse String = {reverseString}")