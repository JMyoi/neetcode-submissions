class Solution {
public:
    void reverseString(vector<char>& s) {
        int r = s.size()-1;
        int l = 0;
        int temp;
        while(r > l){
            temp = s.at(l);
            s.at(l) = s.at(r);
            s.at(r) = temp;
            r--;
            l++;
        }
    }
};