#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    int ans = min(n,m);
    
    if(ans%2 ==0)
    {
        cout<<"Malvika";
    }
    else
    {
        cout<<"Akshat";
    }
    return 0;
}