// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	string fractionToDecimal(int num, int den) {
	    // Code here
       if(num == 0 )
        return "0";
        string ans;
        
        if(num / den < 0 )
        ans+= "-";
        
        int initial = num / den;
        ans += to_string(initial);
        
        if(num % den == 0)
        {
            return ans;
        }
        
        ans+= ".";
        int rem = num % den;
        
        map<int,int> mp;
        int index;
        
        bool repeating = false;
        
        while(rem > 0 && !repeating){
            if(mp.find(rem) != mp.end())
            {
                index = mp[rem];
                repeating = true;
                break;
            }
            else
            {
                mp[rem] = ans.size();
                rem = rem * 10;
                
                int temp = rem / den;
                ans += to_string(temp);
                rem = rem % den;
            }
        }
        if(repeating)
        {
            ans += ")";
            ans.insert(index,"(");
        }
        return ans;
      }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}