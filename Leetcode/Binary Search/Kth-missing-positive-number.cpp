// Problem link: https://leetcode.com/problems/kth-missing-positive-number/

//  Approach 1
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        map<int,bool> mp;
        for(auto i: arr)
        {
            mp[i] = true;
        }
        int c =0;
        
        for(int i=1;i<INT_MAX;i++)
        {
            if(not mp[i])c++;
            if(c == k)
                return i;
        }
        return -1;
    }
};

//  Approach 2
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
       int miss =0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(i == 0)
            {
                miss += arr[0] -1;
                if(miss >= k)
                    return k;
            }
            else
            {
                miss += arr[i] - arr[i-1] -1;
                if(miss >=k)
                {
                    miss -= arr[i] - arr[i-1] -1;
                     int result = arr[i-1];
                while(miss++ < k)
                   result++;
                
                return result;
                }
               
            }
        }
        int result = arr[arr.size() -1];
        while(miss++ < k)
            result++;
        
        return result;
    }
};