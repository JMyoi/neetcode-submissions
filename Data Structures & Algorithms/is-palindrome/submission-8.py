class Solution:
    def isPalindrome(self, s: str) -> bool:
        l: int = 0
        r: int = len(s)-1
        while l < r:
            if not s[l].isalnum():
                l+=1
                continue
            if not s[r].isalnum():
                r-=1
                continue
            print(f"comaring {s[l].lower()} with {s[r].lower()}")
            if s[l].lower() == s[r].lower():
                l+=1
                r-=1
            else:
                return False
        return True