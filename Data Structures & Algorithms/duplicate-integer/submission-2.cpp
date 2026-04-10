#include <unordered_set>
#include <iostream>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //solution using a unordered_set to store unique elements
        //just making a pass through nums once, O(n)
        unordered_set<int> numsSet;
        for(int i = 0; i<nums.size(); ++i){
            //check the set to see if there exists that element already, if yes then there is a duplicate, return true
            auto it = numsSet.find(nums.at(i)); // .find() returns an iterator to where it was found, an iterator is like a pointer to an index, if it is not found it will return the iterator .end(), we can compare it with the iterator .end(), which points to one past the last element of a set, to see if it exists
            if(it != numsSet.end()){
                return true;
            }
            //add that new unique element to set
            numsSet.insert(nums.at(i));

        }
        return false;
    }
};