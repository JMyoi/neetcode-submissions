#include <cctype> // isalnum()
#include <iostream>
class Solution {
public:
    bool isPalindrome(string s) {
        // parsing method, remove all Non-aphanumeric characters before comparing
        for(int i = 0; i < s.size(); ++i){
            if(!isalnum(s.at(i))){
                s.erase(i, 1);
                i--;//becauase it will shift right and we should not go to the next index on the next iteration stay on this one, cause the next letter will be shifted here
            }
            else{
                s.at(i) = tolower(s.at(i));
            }
        }
        cout<<" parsed string  : "<<s<<endl;
        // reverse the string
        string reversed = "";
        for(int i = s.size()-1; i>=0; --i){
            reversed.push_back(s.at(i));
        }
        cout<<"reversed: "<<reversed<<endl;
        if(reversed == s)
            return true;
        else 
            return false;
    }


};



















