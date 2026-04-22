class Solution {
public:
    int search(vector<int>& nums, int target) {
        return RecBinarySearch(nums, target, 0, nums.size() - 1);
    }
    int RecBinarySearch(const vector<int>& nums, int target, int low, int high){
        if(low > high)
            return -1;
        int mid = (high + low) / 2;
        if(nums.at(mid) == target)
            return mid;
        if(target < nums.at(mid))
            return RecBinarySearch(nums, target, low, mid - 1);
        if(target > nums.at(mid))
            return RecBinarySearch(nums, target, mid + 1, high);
    }
};
// 0 1 2 3 4 5