class Solution {
public:
    int search(vector<int>& nums, int target) {
        //iterative method
        int low = 0; 
        int high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums.at(mid) == target){
                return mid;
            }
            else if(target < nums.at(mid)){
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return -1;
    }
};
