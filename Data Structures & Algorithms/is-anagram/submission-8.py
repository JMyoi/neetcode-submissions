class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        S: dict[str, int] = {}
        T: dict[str, int] = {}
        for c in s:
            if c in S:
                S[c] +=1
            else:
                S[c] = 1
        for c in t:
            if c in T:
                T[c] +=1
            else:
                T[c] = 1
        #check if frequencies are same
        for k, v in S.items():
            if T.get(k) != v:
                return False

        for k, v in T.items():
            if S.get(k) != v:
                return False

        return True
            

