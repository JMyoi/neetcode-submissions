class Solution {
public:
/*
restate the question
    so after deleting one character from it is it still a palindrome, 
    if it is already a palindrome then you can simply remove the middle? 
    for already odd palindromes simply remove the middle
        aca, remove c, aa, 
    for already even palindromes, you cannot remove any one for it to still remain a palenrome
        aabccccbaa
    can a non palindrome be made a palindrome by removing one character?
        yes, abbda, remove b, -> abda, odd to even
        even to odd?
            acda, remove d -> aca            
        longer odd
            zracddcadrz
        longer even
            zra cdd crz

        
ask about input/ constraints, edge cases
    is the input given as any string with non alpha numeric characters?

discuss atleast 2 soluitons
    Solution one, two pointer
        converge from left to right if at any given point L != right
        look into the future of left ++ 
            if that is equal to right then remove this left one and continue
            if it is not equal then check the right's future
            if right-- is equal to the left then this is the one to remove and continue
            if it is not equal then we have looked into both futures and  it's not valid palindrome even if you remove one
        we can keep a bool removedOne and an index to keep track of the one we removed
            if we have already removed a character and there are anymore cases in the future where 
            the characters are not equal then return false, we cannot simply remove one and make it a palindrome
    state time and space complexity of each. 
        time complexity is O(n)
*/
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        bool removedOneAlready = false;
        int removedIndex = -1;

        while(left < right){
            while(left <= right && !isalnum(s.at(left))){ // ignore non-alnum characters
                left++;
            }
            while(right >= left && !isalnum(s.at(right))){
                right--;
            }
            //check the futures of both too see if we can remove one
            if(tolower(s.at(left)) != tolower(s.at(right))){
                if(removedOneAlready == true){
                    return false;
                }
                //check left future
                int leftFuture = left + 1;
                int rightFuture = right - 1;
                if(s.at(leftFuture) == s.at(right)){
                    removedIndex = left;
                    left++;
                    removedOneAlready = true;
                }// check the right future
                else if(s.at(rightFuture) == s.at(left)){
                        removedIndex = right;
                        right--;
                        removedOneAlready = true;
                }
                else{
                    return false;
                }
            }
            else{
                left++;
                right--;
            }
        }
        return true;

    }
};