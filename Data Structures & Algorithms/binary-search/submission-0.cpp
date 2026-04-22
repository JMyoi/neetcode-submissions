class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0; 
        int high = nums.size() - 1;
        int mid;

        while(low <= high){
            mid = (low + high) / 2;
            if(target == nums.at(mid))
                return mid;
            else if(target < nums.at(mid))
                high = mid - 1;
            else if(target > nums.at(mid))
                low = mid + 1;
        }
        return -1;
    }
};
// 0 1 2 3 4 5