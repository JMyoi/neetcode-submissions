class Solution {
public:
        /*
        for every string check if first character is same if it is save it
            if not return empty string
        check next character to see if it's same in all strings if it is save it 
            if not return the first character
        repeat
        */
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        bool exit = false;

        for(int i = 0; i < strs.at(0).size() && !exit; i++){ // outer loop controls check of each character
            char currChar = strs.at(0).at(i);

            for(int j = 0; j < strs.size(); j++){ // inner loop checks each string if they have same character at that index
                if(i >= strs.at(j).size()  || strs.at(j).at(i) != currChar){
                    exit = true;
                    break;
                }
            }
            if(!exit){//if we have made it out the inner loop check and that specific character i was the same then update prefix.
                prefix += currChar;
            }
        }
        return prefix;
    }
};

