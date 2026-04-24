class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*
            apply regular binary search, 
            if found return index, if not then return l+1 to be the index where it would be. 
            O(log n)
        */
        int l = 0; 
        int h = nums.size() - 1;
        
        while(l <= h){
            int mid = (l + h) / 2;
            if(nums.at(mid) == target)
                return mid;
            if(target < nums.at(mid))
                h = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
};