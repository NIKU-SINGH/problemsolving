#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
      while(t--)
	{
	      string str;
	      cin>>str;
	      
	      int n = str.length();
	      int part1freq[26] ={0};
	      int part2freq[26]={0};
	      
	      for(int i=0;i<n/2;i++)
	      {
	            part1freq[str[i]-'a']++;
	      }
	      
	      for(int j=(n+1)/2;j<n;j++)
	      {
	            part2freq[str[j]-'a']++;
	      }
	   
	     int res=0;
	     
	     for(int i=0;i<26;i++)
	     {
	           if(part1freq[i] != part2freq[i])
	           {
	                 res++;
	                 break;
	           }
	           
	     }
	     if(res==0)
	     cout<<"YES"<<"\n";
	     else
	     cout<<"NO"<<"\n";
	}
	return 0;
}
