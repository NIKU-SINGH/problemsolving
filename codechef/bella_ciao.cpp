#include <iostream>
using namespace std;
#define ll long long int 

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	      ll D,d,P,Q;
	      cin>>D>>d>>P>>Q;
	      
	      ll a,n,diff,rem;
	      a = P;
	      n = D/d;
	      diff = Q;
	      rem = D % d;
	      
	      cout<<d*((n*(2*a+(n-1)*diff))/2) + rem *(a+n*diff)<<"\n";
	     
	}
	return 0;
}
