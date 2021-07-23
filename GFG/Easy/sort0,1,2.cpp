// Given an array of size N containing only 0s, 1s, and 2s; 
// sort the array in ascending order
// Example 1:

// Input: 
// N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated 
// into ascending order.
// ******link = https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    
    void sort012(int a[], int n)
    {
      int lo=0,mid =0,hi = n-1;
        
        while(mid<=hi)
        {
            switch(a[mid])
            {
                case 0:
                    {
                        int temp = a[mid];
                        a[mid] = a[lo];
                        a[lo] = temp;
                        lo++;
                        mid++;
                        break;
                    }
                   
                case 1: {
                              mid++;
                              break;
                        }
                       
                case 2: {
                           int temp = a[mid];
                           a[mid] = a[hi];
                           a[hi] = temp;
                           hi--;
                           break;
                        }
            }
        }  
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends