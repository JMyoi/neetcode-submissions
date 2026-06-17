class Solution:
    def isValid(self, s: str) -> bool:
        stack: list[str] = []
        mapping: dict[str, str]= { "(": ")", "{": "}","[": "]"}
        for c in s:
            if c in "({[":
                stack.append(c)
            elif c in ")}]":
                if len(stack) == 0:
                    return False
                top = stack.pop()
                if c != mapping[top]:
                    return False
        return len(stack) == 0


                
                    