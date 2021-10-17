#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string ans;
        cout<<s[0];
        
        for(int i=1;i<=s.length()-1;i+=2)
        {
            if(s[i] == s[i+1])
           {
            cout<<s[i];
           }
        }
        cout<<s[s.length()-1]<<'\n';
    }
    return 0;
}