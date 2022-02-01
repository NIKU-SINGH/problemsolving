// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        
        int dp[n+1] = {NULL};
        dp[n] = 1;
        
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i] > 0)
            {
                int min = INT_MAX;
                for(int j=1; j<=arr[i] && i+j < n+1 ;j++)
                {
                    if(dp[i+j] != NULL)
                    {
                        min = std::min(min,dp[i+j]);
                    }
                }
                if(min != INT_MAX)
                {
                    dp[i] = min +1;
                }
                
            }
        }
        return dp[0];
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends