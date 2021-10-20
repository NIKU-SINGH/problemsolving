// Problem Link: https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> map1;
        map<char,char> map2;
        
        if(s.length()!= t.length())
            return false;
        
        for(int i=0;i<s.length();i++)
        {
            char ch1 = s[i];
            char ch2 = t[i];
            
            if(map1.find(ch1) != map1.end())
            {
                if(map1[ch1] != ch2)
                    return false;
            }
            else
            {
                if(map2[ch2] == true)
                    return false;
                else
                {
                    map1[ch1]= ch2;
                    map2[ch2] = true;
                }
            }
        }
        return true;
    }
};