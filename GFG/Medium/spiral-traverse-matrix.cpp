// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        int minr = 0,maxr = r-1;
        int minc = 0,maxc = c-1;
        int count=0,a = r*c;
        vector<int> ans;
        
        while(count<a)
        {
            for(int i=minr,j=minc;j<=maxc && count<a;j++)
            {
                // cout<<matrix[i][j
                ans.push_back(matrix[i][j]);
                count++;
            }
            minr++;
            
            for(int i=minr,j=maxc;i<=maxr && count<a;i++)
            {
                // cout<<matrix[i][j] <<",";
                ans.push_back(matrix[i][j]);
                count++;
            }
            maxc--;
            
            for(int i=maxr,j=maxc;j>=minc && count<a;j--)
            {
                // cout<<matrix[i][j] <<",";
                ans.push_back(matrix[i][j]);
                count++;
            }
            maxr--;
            
            for(int i=maxr,j=minc;i>=minr && count<a;i--)
            {
                // cout<<matrix[i][j] <<",";
                ans.push_back(matrix[i][j]);
                count++;
            }
            minc++;
            
        }
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends