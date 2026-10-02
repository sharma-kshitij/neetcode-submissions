class MinStack:

    def __init__(self):
        self.stack = []
        self.minStack = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        self.minStack.append(val)
        self.minStack.sort()

    def pop(self) -> None:
        popped = self.stack.pop()
        self.minStack.remove(popped)

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minStack[0]