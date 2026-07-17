class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0; 
        int right = s.size()-1;
        while(left < right){
            //swap left and right
            char temp = s.at(left);
            s.at(left) = s.at(right);
            s.at(right) = temp;
            left++;
            right--;
        }

    }
};