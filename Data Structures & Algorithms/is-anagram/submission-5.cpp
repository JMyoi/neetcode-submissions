class Solution {
public:
    bool isAnagram(string s, string t) {
        /*
        brute force, check every character in s to see if it is in t, 
        if it is not then it is not an anagram
        */
        if(t.size() > s.size()) return false; // cannot be anagram if not same size
        //keeps track of each inner loop comparing one character from s to all characters in t, is the letter found in t?
        bool found = false;
        for(int i = 0; i < s.size(); ++i){
            found = false;
            for(int j = 0; j < t.size(); ++j){
                //if it is found then remove that character and move on to the next ith character
                //we want to remove characters because there can be duplicates
                if(s.at(i) == t.at(j)){
                    t.erase(j, 1);
                    found = true;
                    break;
                }
            }
            if(!found) return false;
        }
        return true;
    }
};
