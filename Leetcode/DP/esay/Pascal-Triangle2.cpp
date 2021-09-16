class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascal ;
        
        for(int i=0;i<=rowIndex;i++)
        {
           vector<int> ans;
             for(int j=0;j<=i;j++)
           {
               if(j==0 || j==i)
               {
                   ans.push_back(1);
               }
               else
               {
                    ans.push_back(pascal[i-1][j-1] + pascal[i-1][j]);
               }
           }
             pascal.push_back(ans);
        }
        return pascal[rowIndex];
    }
};