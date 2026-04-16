class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        solution via sorting & two pointer
        sort the array with value and index, we need the pair struct
        start from left at the begining of the sorted nums and 
        right at the end
        take the sum of left and right and if it is the target return indices
        if it is > target, move right --
        if it is < target move left ++ 
        */
        //pair contains Key = index and value = value
        vector<pair<int, int>> sortedNums;
        for(int i = 0; i < nums.size(); ++i){
            sortedNums.push_back({nums.at(i), i});
        } 
        sort(sortedNums.begin(), sortedNums.end());
        for(pair n: sortedNums){
            cout<<" value: "<<n.first<<" index: "<<n.second;
        }
        int l = 0; 
        int r = nums.size()-1;

        while( r > l){
            if((sortedNums.at(l).first + sortedNums.at(r).first) == target)
                return {sortedNums.at(l).second, sortedNums.at(r).second};
            else if(sortedNums.at(l).first + sortedNums.at(r).first < target )
                l++;
            else 
                r--;
        }

        return{-1, -1};
    }
};
