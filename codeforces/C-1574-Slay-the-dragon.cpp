#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll> arr(n);
    ll sum =0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr.begin(),arr.end());
    ll  m;
    cin>>m;
    for(ll i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        ll coins = 0;
        ll idx = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
        
        if(idx == 0)
        {
            if(y > sum - arr[idx])
            coins += y - (sum - arr[idx]);
        }
        else if(idx != n)
        {
            ll a=0,b =0;
            if(arr[idx] < x)
            {
                a += x - arr[idx];
                if(y > sum- arr[idx])
                {
                    a += y - (sum - arr[idx]);
                }
            }
            if(arr[idx - 1] < x)
            {
                b += x - arr[idx -1];
                if(y > (sum - arr[idx-1]))
                {
                    b += y - (sum - arr[idx -1]); 
                }
            }
            coins = min(a,b);
        }
        else
        {
            if(arr[idx-1] < x)
            {
                coins += x- arr[idx];
            }
            if(y > sum - arr[idx-1])
            coins += y - (sum - arr[idx-1]);
        }
        cout<<coins<<"\n";
    }
    return 0;
}