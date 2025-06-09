/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a = 0;
        int b = 1;
        int profit = 0;
        while(b<prices.size())
        {
            if(prices[a]<prices[b])
            {
                int p = prices[b]-prices[a];
                if(profit<p)
                {
                    profit=p;
                }
                
            }
            else{
                a=b;
            }
            b++;
        }
        return profit;
    }
};
// @lc code=end

