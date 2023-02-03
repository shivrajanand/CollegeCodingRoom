# Shivraj Anand
# Reg_no = 21105128029
# Date : 3/2/2023
# Task : Write a program to convert infix to postfix expression

class Stack:

    def __init__(self):
        self.top = -1
        self.input = []
        self.output = []
        self.precedence = {'+': 1, '-': 1, '*': 2, '/': 2, '^': 3}

    def isEmpty(self):
        return True if self.top == -1 else False

    def peek(self):
        return self.input[-1]

    def pop(self):
        if not self.isEmpty():
            self.top -= 1
            return self.input.pop()
        else:
            return "$"

    def push(self, data):
        self.top += 1
        self.input.append(data)

    def isOperand(self, ch):
        return ch.isalpha()

    def precedence_check(self, i):
        """Returns true if precedence of top element of stack has greater or equal precedence in comparison to the scaned character"""
        try:
            a = self.precedence[i]
            b = self.precedence[self.peek()]
            return True if a <= b else False
        except KeyError:
            return False

    def infixToPostfix(self, exp):

        for i in exp:
            if self.isOperand(i):
                self.output.append(i)

            elif i == '(':
                self.push(i)

            elif i == ')':
                while ((not self.isEmpty()) and
                       self.peek() != '('):
                    a = self.pop()
                    self.output.append(a)
                if (not self.isEmpty() and self.peek() != '('):
                    return -1
                else:
                    self.pop()

            else:
                while (not self.isEmpty() and self.precedence_check(i)):
                    self.output.append(self.pop())
                self.push(i)

        while not self.isEmpty():
            self.output.append(self.pop())

        print("".join(self.output))


if __name__ == '__main__':
    exp = input("Enter expression: ")
    mystack = Stack()
    mystack.infixToPostfix(exp)
