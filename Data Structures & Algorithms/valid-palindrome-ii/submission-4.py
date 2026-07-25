"""
write a helper function that check for palindrome, 
the main funciton will start from left and right and if it meets characters that are not the same
    check if palindrome of left+1 and right OR left and right -1
    return that.
    if I eliminate left and that is a palindrome then true
    if i eliminate the right and it's palindrome then true
    if both substrings are not then false

"""
class Solution:
    def validPalindrome(self, s: str) -> bool:
        left = 0
        right = len(s) - 1
        while left < right:
            if s[left] != s[right]:
                return self.isPalindrome(s, left + 1, right) or self.isPalindrome(s, left, right - 1)
            left+=1
            right-=1
        return True

    def isPalindrome(self,s:str, left: int, right: int) -> bool:
        while left < right:
            if s[left] != s[right]:
                return False
            left+=1
            right-=1
        return True                



