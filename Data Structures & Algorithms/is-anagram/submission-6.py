class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #Sorting method
        s = list(s)
        t = list(t)
        s.sort()
        t.sort()
        return s == t
