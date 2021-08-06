#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n>>a;
    
    int x,max=a,min=a,maxi=0,mini=0;
    
    for(int i=1;i<n;i++)
    {
        cin>>x;
        
        if(x>max)
        {
            max = x;
            maxi= i;
        }
        
        if(x<=min)
        {
            min=x;
            mini = i;
        }
    }
    
    cout<<(maxi + n - 1 - mini) - (maxi>mini ? 1:0);
    return 0;
}