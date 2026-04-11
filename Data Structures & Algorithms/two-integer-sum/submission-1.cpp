#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //O(n) complexity using an unordered_map
        //find difference of each element, target - nums.at(i), then if the difference is found in the hash map then return the pair
        //if not then add that element to the hash map,
        unordered_map<int, int> Map; //stores, key as element and value as index
        for(int i = 0; i<nums.size();++i){
            int diff = target - nums.at(i);
            auto it = Map.find(diff); // will return the iterator to that position if found in the map or .end(), if not
            if(it != Map.end()){
                vector<int> ans = {it->second, i};
                return ans;
            }
            Map.insert({nums.at(i), i});
        }
        return {-1, -1};
    }
};
