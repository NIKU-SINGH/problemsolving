#include <bits/stdc++.h>
using namespace std;

bool solution()
{
      string st;
	      cin>>st;
            int n = st.length();
	      int start =n;
	      int end =-1;
	      for(int i=0;i<n;i++)
	      {
	            if(st[i] == '1')
	            {
	                 start = min(start,i);
	                 end  = max(end,i);
	            }
	      }
	       if(end == -1)
	      {
	           return false; 
	      }
	      else{
	            for(int i=start;i<end;i++)
	            {
	                  if(st[i]!='1')
	                  return false;
	            }
	            return true;
	      }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	      
	      if(solution())
	      {
	            cout<<"YES\n";
	      }
	      else
	      cout<<"NO\n";
	}
	return 0;
}
