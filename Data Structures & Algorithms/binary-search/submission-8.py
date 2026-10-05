class Solution:
    def search(self, nums: List[int], target: int) -> int:
        return self.binSearch(nums, target, 0, len(nums)-1)

    def binSearch(self, nums: List[int], target: int, low: int, high: int):
        if low > high:
            return -1

        mid = (low + high) // 2
        if nums[mid] == target:
            return mid
        if target > nums[mid]:
            return self.binSearch(nums, target, mid + 1, high)
        if target < nums[mid]:
            return self.binSearch(nums, target, low, mid - 1)
    