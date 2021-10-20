#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        cout<<2<<"\n";
        int a = n;
        int b = n-1;
        for(int i=0;i<n-1;i++)
        {
            cout<<a<<" "<<b<<"\n";
            a=(a+b+1)/2;
            b--;
        }
       
    }
    return 0;
}