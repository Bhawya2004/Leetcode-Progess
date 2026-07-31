class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        x=0
        n=len(operations)
        for i in range(n):
            str=operations[i]
            if str=="++X" or str=="X++":
                x=x+1
            else:
                x=x-1
        return x