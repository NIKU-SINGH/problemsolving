// Problem link: https://codeforces.com/contest/1633/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main(){
   int t;
   cin>>t;
   
   while(t--){
       int n; cin>>n;
       if(n % 7 == 0){
           cout<<n<<"\n";
       }
       else{
       int div = n / 10;
      int lr = div * 10;
       int rr = (div + 1 ) * 10 -1;
       
       int rem = rr % 7;
       cout<< rr - rem<<"\n";
       }
      
   }
    return 0;
}