class Solution {
public:
    bool isPal(string s, int l, int r){
        while(l < r){
            if(s.at(l) != s.at(r))
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int L = 0; 
        int R = s.size()-1;
        while(L < R){
            if(s.at(L) != s.at(R)){
                return isPal(s, L+1, R) || isPal(s, L, R-1);
            }
            L++;
            R--;
        }
        return true;
    }
};