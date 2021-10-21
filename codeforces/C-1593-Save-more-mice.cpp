#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[k];
        
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k,greater<int>());
        int c =0;
        int ans =0;
        
        for(int i=0;i<k;i++)
        {
            if(c>=a[i])
            break;
            
            c+= n - a[i];
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}