// problem link: https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
         int area=0,maxarea=0;
         int left = 0;
        int right = height.size()-1;
        
        while(left<right)
        {
            area = (right - left) * min(height[left],height[right]);
            
            if(area > maxarea)
            {
                maxarea = area;
            }
            
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        
        return maxarea;
    }
};