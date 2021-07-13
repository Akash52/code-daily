//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int currMax=0,maxSoFar=0;
        
        for(int i=1;i<prices.size();i++){
            
            currMax=max(0,currMax+=prices[i]-prices[i-1]);
                maxSoFar=max(currMax,maxSoFar);
        }
            return maxSoFar;
    }
};

/*
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
*/


