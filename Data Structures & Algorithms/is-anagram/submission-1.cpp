class Solution {
public:
    bool isAnagram(string s, string t) {
        //brute force
        //go thorugh all letters and compare with every other character, 
        //if a character is met then remove it from string t, and continue
        // if a character form s is not in t durring a pass then return false
        //if we've made it to the end of the loop that means that every letter in s is also in t, return true
        if(t.size() != s.size()){ // if they are not the same size then it's not a valid anagram
            return false;
        }
        int prevSize;
        for(int i = 0; i<s.size(); ++i){
            prevSize = t.size();
            for(int j = 0; j<t.size(); ++j){
                if(s.at(i) == t.at(j)){
                    t.erase(j, 1); // remove that letter or could do t.erase(t.begin()+ j)
                    break; // no need to continue searching for a match at t, continue next letter of s
                }
            }
            if(prevSize == t.size())// if no characters were removed then that means a character was not found in t, not an anagram
                return false;
        }
        return true;
    }
};
