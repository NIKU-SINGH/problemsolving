#include<bits/stdc++.h>
using namespace std;

void rabin_Karp_Search(string str, string pat){
    
    int d = 10;
    vector<int> ans;
    int patHash,strHash;
    int m = pat.length();
    int n = str.length();

    for(int i=0;i<m;i++){
        patHash = patHash*d + pat[i];
        strHash =  strHash *d + str[i];
    }
    cout<<patHash<<"  ... "<<strHash;

}

int main()
{
    string str,pat;
    cout<<"Enter the string:";
    cin>>str;
    cout<<"Enter the pattern:\n";
    cin>>pat;
    rabin_Karp_Search(str,pat);
    // vector<int> ans = rabin_Karp_Search(str,pat);
    // for(auto x: ans){
    //     cout<<x<<" ";
    // }
    return 0;
}