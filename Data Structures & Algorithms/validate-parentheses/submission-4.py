class Solution:
    def isValid(self, s: str) -> bool:
        parenMap = {'(': ')', '{': '}','[': ']'}
        stack = []

        for p in s:
            if p in parenMap:
                if stack and stack[-1] in parenMap.values():
                    return False
                stack.append(p)
            else:
                if stack and p == parenMap[stack[-1]]:
                    stack.pop()
                else:
                    return False
        if stack:
            return False
        return True
            

                
                    