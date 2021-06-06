// ******Tutorial************
// 1535A - Fair Playoff
// It is easier to determine the case when the players with the maximum skills will not meet in the finals. It means that they met in the semifinals, and in the other semifinals, both players are weaker.

// It's easy to check this case with the following formula: min(s1,s2)>max(s3,s4) or max(s1,s2)<min(s3,s4).
// ****************************
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        vector<int> s(4);
        for(int& x : s) cin >> x;
        if(max(s[0],s[1]) < min(s[2],s[3]) || min(s[0],s[1]) > max(s[2],s[3]))
        cout<<"NO\n";
        else
        cout<<"YES\n";
     }
    return 0;
}