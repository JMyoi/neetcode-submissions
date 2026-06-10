#include <unordered_set>
#include <iostream>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> S;
       for(int i = 0; i < nums.size(); i++){
            if(S.count(nums.at(i)))
                return true;
            else
                S.insert(nums.at(i));
       }
       return false;
    }
};