class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // brute force appraoch, 
        //have another vector that keeps track of nums as we scan, 
        //if we meet a number that we have already saw then return false
        vector<int> uniqueNums;
        cout<<uniqueNums.size()<<endl;;
        // go through each element in nums
        for(int i = 0; i< nums.size(); i++){
            // check unique nums to see if it has alreay been stored, if yes then there is a duplicate
            for(int j = 0; j < uniqueNums.size(); j++){
                if(nums.at(i) == uniqueNums.at(j)){
                    return true;
                }
            }
            uniqueNums.push_back(nums.at(i));
        }
        return false;
    }
};