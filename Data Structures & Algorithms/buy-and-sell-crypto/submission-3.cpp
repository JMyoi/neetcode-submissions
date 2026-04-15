class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //using two pointer
        //smallest buy which is left pointer, representing index
        //biggest buy which is right pointer, representing index
        /*
            we want to pick smallest buy values such that 
            the the biggest buy value is on right. 
        */
        //start at index zero
        int lowestBuy = 0; // Left
        int highestSell = 0; // Right
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); ++i){
            //check for updating buy if we found a smaller one
            if(prices.at(i) < prices.at(lowestBuy)){
                lowestBuy = i; // now this is the smallest buy
                if(highestSell < lowestBuy){ // right has to stay right
                    highestSell = lowestBuy;
                }
            }
            //check to update sell if we found a bigger one
            if(prices.at(i) > prices.at(highestSell)){
                highestSell = i;
            }
            //after update, check if it is the biggest profit we've seen
            int currProfit = prices.at(highestSell) - prices.at(lowestBuy);
            maxProfit = max(maxProfit, currProfit);
        }
        return maxProfit;

    }
};
