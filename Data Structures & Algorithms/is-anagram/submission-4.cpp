#include <unordered_set>
#include <iostream>
class Solution {
public:
    bool isAnagram(string s, string t) {
        //using a hash map, that allows for duplicates. a unordered_multiset, allows for 
        //store all characters from s into a MultiSet A, O(n)
        //for every character of t, check to see if it is in the MultiSet, if it is then remove it form the multi set and continue
        //if it is not then it is not a valid anagram O(n) to go through t and constant time for check
        if(s.size() != t.size())
            return false;
            
        unordered_multiset<char> set;
        for(char c : s){ // O(n)
            set.insert(c);
        }
        for(char c : t){
            auto it = set.find(c);
            if(it != set.end()){
                set.erase(it); // we want to pass in the iterator not set.erase(c), because it will erase all occurances of the character that way
            }
            else{// character not in the set, then not an anagram
                return false;
            }
        }
        return true;
    }
};
