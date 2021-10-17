#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,str1 = "hello";
    int j=0,pos=0;
    cin>>str;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == str1[j])
        {
            j++;
            pos++;
        }
        if(pos == 5)
        {
            break;
        }
    }
    
    if(pos == 5)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}
