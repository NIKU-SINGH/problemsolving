#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int l = 1,r =n-1,c=0;
    while(l<=n/2)
    {
        if(r%l == 0)
        c++;
        
        l++;
        r = n-l;
    }
    cout<<c<<'\n';
    return 0;
}