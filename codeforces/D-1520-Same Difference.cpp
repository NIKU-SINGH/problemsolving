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
        map<int,int> m;
        long long int res=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            x -=i;
            res += m[x];
            m[x]++;
        }
        cout<<res<<"\n";
    }
    return 0;
}