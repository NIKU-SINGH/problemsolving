class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int leastprice = prices[0];
        int max = INT_MIN;
        int profittoday = 0;
        if(prices.size()==1)
        {
            return 0;
        }
        
        for(int i =1;i<prices.size();i++)
        {
            if(prices[i] < leastprice)
                leastprice = prices[i];
            
            profittoday = prices[i] - leastprice;
            
            if(profittoday > max)
                max = profittoday;
        }
        
        return max;
    }
};