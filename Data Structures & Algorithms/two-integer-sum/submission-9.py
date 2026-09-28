"""
use a dict, to store the difference of target - current element : index

if the current element is seen in the set then that means that elment at that index + this index will = target
"""
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        difference_index = {}

        for i, n in enumerate(nums):
            if n in difference_index:
                return [difference_index[n], i]
            difference_index[target - n] = i

    
        
        