### Problem link: https://leetcode.com/problems/single-element-in-a-sorted-array/

You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

 

### Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2

### Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10

```
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
//      Approach 1

        map<int,int> mp;
        int ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]] == 1)
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
        
//         Binary search
        int low =0, high = nums.size()-1;
        
        while(low < high)
        {
            int mid = low + (high - low)/2;
            
            if(mid % 2 == 0)
            {
                if(nums[mid] == nums[mid+1])
                {
                    low = mid+2;
                }
                else
                {
                    high = mid;
                }
            }
            else
            {
                if(nums[mid]==nums[mid-1])
                {
                    low = mid +1;
                }
                else
                {
                    high = mid;
                }
            }   
        }
        return nums[low];
    }
//  3rd Approach
        int start =0, end = nums.size()-2;
        while(start<=end)
        {
            int mid = start + (end - start)/2;
            
            if(nums[mid] == nums[mid ^1])
                start = mid+1;
            else
                end = mid-1;
        }
        return nums[start];
};
```