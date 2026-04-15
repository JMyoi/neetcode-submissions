class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //naive solution, calculate profits for every pair of days, return the max profit
        // n + ... + 3 + 2 + 1 = O(n^2)
        int maxProf = 0; 
        for(int i = 0; i < prices.size(); ++i){
            for(int j = i + 1; j < prices.size(); ++j){
                int profit = prices.at(j) - prices.at(i);
                if(profit > maxProf)
                    maxProf = profit;
            }
        }
        return maxProf;
    }
};
