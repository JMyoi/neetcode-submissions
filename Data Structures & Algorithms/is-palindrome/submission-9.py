class Solution:
    """
    parse all strings to only be alphanumeric
    1. create a new string that is the reversed version of the parsed string, compare for equality
    2. two pointers
    
    """
    def parseStr(self, s: str):
        newStr: list[str] = []
        for c in s:
            if c.isalnum():
                newStr.append(c.lower())
        return "".join(newStr)

    def isPalindrome(self, s: str) -> bool:
        parsed = self.parseStr(s)
        newS = parsed[::-1]
        return newS == parsed