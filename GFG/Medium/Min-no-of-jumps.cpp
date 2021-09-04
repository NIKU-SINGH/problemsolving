// O(n2) approach
class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int dp[n];
        for(int i=0;i<n;i++)
        {
            dp[i] = INT_MAX;
        }
        dp[0] = 0;
        for(int i=1;i<n;i++)
        {
            for(int j =0;j<i;j++)
            {
                if(dp[j] != INT_MAX && arr[j]+j >=i)
                {
                    if(dp[j]+1 < dp[i])
                    {
                        dp[i] = dp[j]+1;
                    }
                }
            }
        }
        if(dp[n-1] != INT_MAX)
        {
            return dp[n-1];
        }
        else
        return -1;
        
    }
};