

class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freq = {}
        for n in nums:
            if n in freq:
                return True
            freq[n] = freq.get(n, 0) + 1
        return False
    