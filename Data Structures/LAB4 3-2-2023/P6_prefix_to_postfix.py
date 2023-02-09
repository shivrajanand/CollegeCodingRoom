# Shivraj Anand
# Reg_no = 21105128029
# Date : 3/2/2023
# Task : Write a program to convert prefix to postfix expression

operators = set(['+', '-', '*', '/', '^'])


def prefix_to_postfix(exp):
    stack = []
    exp = exp[::-1]

    for i in exp:
        if i in operators:
            a = stack.pop()
            b = stack.pop()
            temp = a+b+i
            stack.append(temp)
        else:
            stack.append(i)

    return stack


if __name__ == '__main__':
    expression = input("Enter prefix expression: ")
    postfix = prefix_to_postfix(expression)
    print(*postfix)
