class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j =0;
        for(int i=0;i<t.length();i++)
        {
            if(t[i] == s[j] && j < s.length())
            {
                j++;
            }
        }
        if(j == s.length())
            return true;
        else
            return false;
    }
};