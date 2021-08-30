class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows) ;
        
        for(int i=0;i<numRows;i++)
        {
            pascal[i].resize(i+1);
                pascal[i][0] =1;
                pascal[i][i] = 1;
            
         for(int j=1;j<i;j++)
                {
                    pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
                }
        }
        return pascal;
    }
};

// *************************************************************
// Second solution same 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        
       for(int i=0;i<numRows;i++)
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
        return pascal;
    }
};