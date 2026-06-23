#include <cctype>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scores;
        for(int i = 0; i < operations.size(); ++i){
            
            if (operations.at(i) == "+"){
                int top1 = scores.top();
                scores.pop();
                int top2 = scores.top();
                scores.push(top1);
                scores.push(top1 + top2);
            }
            else if (operations.at(i) == "C"){
                scores.pop();
            }
            else if (operations.at(i) == "D"){
                scores.push(scores.top()*2);
            }
            else{
                scores.push(stoi(operations.at(i)));
            }
        }
        int sum = 0;
        while(!scores.empty()){
            sum += scores.top();
            scores.pop();
        }
        return sum;
    }
};