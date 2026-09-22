"""
brute force solution
    for each character in s, check if that character exists in t, if it does remove it
    at the end if we have no characters left in t, then it's a valid anagram

Hash map solution
    build a frequency map of letters in first string s O(n)
    for all characters in t if it's found in s, then decrement O(n)
        if not then return false
    at the end if not all frequencies are 0 then return false O(n)
        else return true
"""
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        return Counter(s) == Counter(t)
