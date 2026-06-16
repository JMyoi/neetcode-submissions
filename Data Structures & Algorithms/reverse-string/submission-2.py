class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        l: int = 0; 
        r: int = len(s) - 1
        for i in range(int(len(s)/2)):
            temp: str = s[l]
            s[l] = s[r]
            s[r] = temp
            l+=1
            r-=1
        