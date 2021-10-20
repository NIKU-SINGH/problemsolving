class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        if(k == num.length())
            return "0";
        
        for(int i=0;i<num.length();i++)
        {
            while(k>0 && st.size()>0 && num[i]<st.top())
            {
                st.pop();
                k--;
            }
             st.push(num[i]);
        }
        
         while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        
        string ans;
        if(st.size() == 0)
          ans ="0";
        
        while(st.size()>0)
        {
            ans += st.top();
            st.pop();
        }

            while (ans.length() > 0 && ans.back() == '0') {
            ans.pop_back();
            }
        
        if(ans.length() == 0)
          ans ="0";
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};