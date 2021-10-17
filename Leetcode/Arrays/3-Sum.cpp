class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        if(nums.size()<3) return ans;
        sort(nums.begin(),nums.end());
        
        
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0 && nums[i] == nums[i-1])
                continue;
            
            int l = i+1;
            int r = nums.size()-1;
            
            while(l<r)
            {
                int sum = nums[i] + nums[l]+nums[r];
                
                if(sum > 0)
                    r--;
                else if(sum < 0)
                    l++;
                    else 
                    {
                        ans.push_back({nums[i],nums[l],nums[r]});
                        l+=1;
                        while(nums[l] == nums[l-1] && l<r)
                            l+=1;
                    }
            }
        }
        return ans;
    }
};