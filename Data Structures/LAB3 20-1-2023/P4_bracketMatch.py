# Shivraj Anand
# Reg_no = 21105128029
# Date : 20/1/2023
# Task : Write a program to check a bracket balanced expression
class Stack:
    def __init__(self):
        self.list = []

    def push(self, data):
        self.list.append(data)

    def pop(self):
        return self.list.pop()

    def size(self):
        return len(self.list)

    def peek(self):
        return self.list[self.size()-1]


def expression_check(exp):
    mystack = Stack()
    opening_list = "[{("
    closed_list = ")}]"
    for char in exp:
        if char in opening_list:
            mystack.push(char)
        elif char in closed_list:
            if mystack.peek() == '(' and char == ')':
                pass
            elif mystack.peek() == '{' and char == '}':
                pass
            elif mystack.peek() == '[' and char == ']':
                pass
            else:
                return False

            mystack.pop()
        else:
            pass
    if mystack.size() != 0:
        return False
    return True


if __name__ == '__main__':
    expression = input("Enter Expression:  ")
    val = expression_check(expression)
    print(val)
    if val:
        print("The given string is balanced")
    else:
        print("The given string is not balanced")
