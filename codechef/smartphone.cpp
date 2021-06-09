#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	long long int A[n];
	for(int i=0;i<n;i++)
	{
	      cin>>A[i];
	}
	
	sort(A,A+n);
	for(int i=0;i<n;i++)
	{
	      A[i] = A[i] * (n-i);
	}
      
      sort(A,A+n);
      cout<<A[n-1];
	
	return 0;
}
