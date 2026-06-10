class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        S = set()
        for n in nums:
            if n in S:
                return True
            else:
                S.add(n)
        return False
    