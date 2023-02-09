mylist = [None]*5
class mystack:

    def __init__(self, n):
        self.size = n
        self.stack = [None]*n

    def displayStack(self):
        print(self.stack[0:int(self.size/2)+1], end="")
        print("<>", end="")
        print(self.stack[(int(self.size/2)+1):int(self.size)], end="")


new = mystack(5)
for i in range(5):
    new.stack[i] = i+1
print(new.stack)
new.displayStack()