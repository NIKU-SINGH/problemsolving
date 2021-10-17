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
        int k =2;
        int x=0;
        int d = pow(2,k);
        while(d-1<=n)
        {
             d = pow(2,k);
            if(n % (d-1) == 0)
            {
                x = n/(d-1);
                break;
            }
            k++;
        }
        cout<<x<<"\n";
    }
    return 0;
}