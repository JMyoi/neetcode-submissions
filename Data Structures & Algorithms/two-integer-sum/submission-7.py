class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # put all elements in a dict with key = element and value = index
        # go through the list and do target - nums[i] and find if that difference is in the dict
        Table: dict[int, int] ={}
        for i, n in enumerate(nums):
            Table[n] = i
        print(f"resulting tale: {Table}")

        for i, n in enumerate(nums):
            diff = target - n
            if diff in Table and Table.get(diff) != i:
                return [i, Table.get(diff)]
        