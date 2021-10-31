### Problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int sd =0;
        int bd = 0;
        
        for(int i =1;i<prices.size();i++)
        {
            if(prices[i] > prices[i-1])
            {
                sd++;
            }
            else
            {
                profit += prices[sd] - prices[bd];
                sd = bd = i;
            }
        }
        profit += prices[sd] - prices[bd];
        return profit;
    }
};

// My Approach 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy= INT_MAX;
        int profit = 0;
        
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i] < buy)
                buy = prices[i];
            
            int pst = prices[i] - buy;
            if(pst >0)
            {
                profit += pst;
                buy = prices[i];
            }
        }
        return profit;
    }
};