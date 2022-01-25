### Problem 
[Question](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

```
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

```

```
class Solution {
public:
    
    int firstPosition(vector<int>& nums, int target,int condt){
        int ans=-1;
        int low = 0;
        int high = nums.size()-1;
        
        while(low<= high){
            int mid = low + (high - low)/2;
            
            if(nums[mid] == target){
                ans= mid;
                if(condt == 0) high = mid -1;
                if(condt == 1) low = mid+1;
            }
            else if(nums[mid] > target)
                    high = mid -1;
            else 
                low = mid+1;
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0] = firstPosition(nums, target,0);
        ans[1] = firstPosition(nums, target,1);
        return ans;
    }
};

```