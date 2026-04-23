class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i = 0; i < s.size(); ++i){
            char c = s.at(i);

            if(c == '(' || c == '[' || c == '{'){
                //only valid open brackets should go in, if it's not then it's invalid
                    stk.push(c);
            }
            else{
                if(stk.empty()) return false;
                
                if((stk.top() == '{' && c == '}') || 
                        (stk.top() == '(' && c == ')') || 
                        (stk.top() == '[' && c == ']'))
                    stk.pop();
                else
                    return false;
            }
        }       
        if(stk.empty())
            return true;
        return false;
    }
};
