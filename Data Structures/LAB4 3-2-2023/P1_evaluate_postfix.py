# Shivraj Anand
# Reg_no = 21105128029
# Date : 3/2/2023
# Task : Write a program to evaluate a postfix expression

class Stack:

    def __init__(self):
        self.top = -1
        self.list = []

    def isEmpty(self):
        return True if self.top == -1 else False

    def peek(self):
        return self.list[-1]

    def pop(self):
        if not self.isEmpty():
            self.top -= 1
            return self.list.pop()
        else:
            return None

    def push(self, data):
        self.top += 1
        self.list.append(data)

    def evaluation(self, exp):

        for i in exp:
            if i.isdigit():
                self.push(i)
            else:
                val1 = self.pop()
                val2 = self.pop()
                self.push(str(eval(val2 + i + val1)))

        return (self.pop())


if __name__ == '__main__':
    exp = input("Input numberical expression: ")
    mystack = Stack()
    print(f"postfix evaluation: {mystack.evaluation(exp)}")