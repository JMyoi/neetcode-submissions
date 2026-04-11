class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //brute force apprach, For every element take the sum with every other element to see if it is = target
        //n + ... + 4 + 3 + 2 + 1 = n(n+1) / 2 = O(n^2)
        for(int i = 0; i<nums.size(); ++i){
            for(int j = i+1; j < nums.size(); ++j){
                if(nums.at(i) + nums.at(j) == target){
                vector<int> ans = {i, j};
                return ans;
                }
            }
        }
    }
};
