// Problem link: https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/

class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j =i+1;j<nums.size();j++)
            {
                string ans = nums[i] + nums[j];
                string rev = nums[j] + nums[i];
                if(ans == target)
                {
                    c++;
                }
                if(rev == target)
                    c++;
                
            }
        }
        return c;
    }
};