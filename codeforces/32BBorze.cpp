#include<iostream>
using namespace std;

int main()
{
    string str ;
    cin>>str;

    
    int n = str.length();
    
    for(int i=0;i<n;i++)
    {
        if(str[i]=='.')
        cout<<0;
        else
        if(str[i] == '-' && str[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else 
        if(str[i] == '-' && str[i+1]=='-')
        {
            cout<<2;
            i++;
        }
    }
    
    
    return 0;
}