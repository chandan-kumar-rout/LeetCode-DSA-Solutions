class Solution {
    public: 
        int maxProfit(vector<int>& prices) {
            
            // assume the  first day's price is the minimum prices so far 
            int minPrice = prices[0]; 

            // No profit has been made yet 
            int maxProfit = 0; 

            // Start traversing from the second day 
            for(int i = 1; i < prices.size(); i++) 
            {
                // calculate profit if we buy at the minimum price seen so far and sell at today's price 
                int profit = prices[i] - minPrice; 

                // update the maximum profit if the current profit is greater 
                maxProfit = max(maxProfit, profit); 

                // update the minimum price if today's price is lower 
                minPrice = min(minPrice, prices[i]); 
            }
            // return the maximum profit obtained 
            return maxProfit;
        }
}; 
