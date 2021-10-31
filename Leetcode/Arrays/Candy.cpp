// Problem link: https://leetcode.com/problems/candy/

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n);
        candies[0] =1;
        for(int i=1;i<n;i++)
        {
                candies[i] =1;
        }
        
        for(int i=1;i<n;i++)
        {
            if(ratings[i] > ratings[i-1])
            candies[i] = max(candies[i-1]+1,candies[i]);
        }
        
        for(int i= n-2;i>=0;i--)
        {
            if(ratings[i] > ratings[i+1])
                candies[i] = max(candies[i+1]+1, candies[i]);
        }
        int candy=0;
        
        for(int i=0;i<n;i++)
        {
            candy += candies[i];
        }
        return candy;
    }
};