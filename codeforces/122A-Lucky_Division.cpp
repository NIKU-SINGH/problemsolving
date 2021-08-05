#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int arr[14] = {4,7,44,47,74,77,444,447,474,744,477,747,774,777};
    int n;
    cin>>n;
    bool flag =false;
    
    for(int i=0;i<14;i++)
    {
        if(n % arr[i] == 0)
        {
            flag=true;
            break;
        } 
    }
    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    
    return 0;
}