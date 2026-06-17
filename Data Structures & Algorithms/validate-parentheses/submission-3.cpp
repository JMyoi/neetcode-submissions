#include <unordered_map>
class Solution {
public:
    bool isValid(string s) {
        stack<char> S;
        unordered_map<char, char> mapping = {{'(', ')'}, {'{', '}'},{'[', ']'}};

        for(char c: s){
            if(c == '(' || c == '{' || c == '['){
                S.push(c);
            }
            else{
                if (S.empty()) return false;
                if(c == mapping.at(S.top())){
                    S.pop();
                }
                else
                    return false;
            }
        }
        return S.empty();
    }
};
