#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int count = 0, m=0;
	
	for(int i=1;i<=n;i++)
	{
	      if(i%2 ==0)
	      {
	            m += 10;
	            int disp = m;
	            for(int j=0;j<5;j++)
	           {
	                 cout<<disp<<" ";
	                 disp--;
	           }
	      }
	      else
	      {    
	            int disp = m +1;
	           for(int j=0;j<5;j++)
	           {
	                 
	                 cout<<disp<<" ";
	                 disp++;
	                 
	           }
	      }
	      cout<<"\n";
	}
	
	return 0;
}
