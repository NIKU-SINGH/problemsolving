// Qusetion Link: https://codeforces.com/contest/514/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
   string nums;
   cin>>nums;
   
  for(int i=0;i<nums.size();i++){
      if(i==0 && nums[i] == '9')
        nums[i] = nums[i];
      else{
          int digit = nums[i] - 48;
          if(digit > 4)
           nums[i] = char('0' + 9- digit);
      }
  }
  
  cout<<nums<<"\n";
  return 0;
}