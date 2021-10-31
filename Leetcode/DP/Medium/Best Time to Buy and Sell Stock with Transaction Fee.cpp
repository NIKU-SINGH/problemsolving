//  Problem link : 
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/

##Question
You are given an array prices where prices[i] is the price of a given stock on the ith day, and an integer fee representing a transaction fee.

Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

```
Input: prices = [1,3,2,8,4,9], fee = 2
Output: 8
Explanation: The maximum profit can be achieved by:
- Buying at prices[0] = 1
- Selling at prices[3] = 8
- Buying at prices[4] = 4
- Selling at prices[5] = 9
The total profit is ((8 - 1) - 2) + ((9 - 4) - 2) = 8.
```

```
Input: prices = [1,3,7,5,10,3], fee = 3
Output: 6
```

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int obsp = -prices[0];
        int ossp =0;
        int profit =0;
        
        for(int i=1;i<prices.size();i++)
        {
            int nbsp,nssp;
            if(ossp - prices[i] > obsp)
                obsp = ossp - prices[i];
            else
                obsp = obsp;
            
            if(obsp + prices[i] -fee > ossp)
                ossp = obsp + prices[i] -fee;
            else
                ossp = ossp;
        }
        return ossp;
    }
};

## Approach 2
if(prices.size() < 1) return 0;
    int dp0 = 0;
    int dp1 = -prices[0];
    
    for(int i = 1; i < prices.size(); i++){
        dp0 = max(dp0, dp1 + prices[i] - fee);
        dp1 = max(dp1, dp0 - prices[i]);
    }
    return dp0;