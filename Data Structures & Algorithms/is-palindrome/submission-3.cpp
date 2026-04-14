#include <cctype> // isalnum()
class Solution {
public:
    bool isPalindrome(string s) {
        //using two pointers method, 
        //we could also parse the string and remove all non-alphanumeric characters
        //left and right will coverge respectively and ignore 
        //non-alphanumeric characters, 
        //if theya re not the same then return false
        int left = 0; 
        int right = s.size() - 1;

        while(left < right){
            //coverge both left and right until they are alphanum charactures
            while(!isalnum(s.at(left))){
                if(left >= right) break;
                left++;
            }
            
            while(!isalnum(s.at(right))){
                if(left >= right) break;
                right--;
            }

            if(tolower(s.at(left)) != tolower(s.at(right)))
                return false;

            left++;
            right--;
        }
        return true;

        
    }
};



















