// Problem Link: https://codeforces.com/problemset/problem/268/A

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  
  int arr[2][n];
  
  for(int i=0;i<n;i++){
      cin>>arr[0][i]>>arr[1][i];
  }
  int ans=0;
  
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          if(arr[0][i] == arr[1][j])
           ans++;
      }
  }
  cout<<ans<<"\n";
    return 0;
}