#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0,count=0;
    sum = accumulate(arr, arr+n, sum);
    int s=0;
    for(int i=n-1;i>=0;i--)
    {
        s +=arr[i];
        count++;
        if(s > (sum/2))
        {
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}