class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0; 
        int r = s.length()-1;
        while(l < r){
            if(!isalnum(tolower(s.at(l)))){
                l++;
                continue;
            }
            if(!isalnum(tolower(s.at(r)))){
                r--;
                continue;
            }
            cout<<"comparing: "<<s.at(l)<<" with: "<<s.at(r)<<endl;
            if(tolower(s.at(l)) != tolower(s.at(r))){
                return false;
            }
            else{
                l++;
                r--;
            }
        }
        return true;
    }
};
