class Solution {
public:
    string reverseParentheses(string s) {
        int m = s.length();
        stack<int>st;
        for(int i = 0;i<m;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')')
            {
                int ind = st.top();
                st.pop();
                reverse(s.begin()+ind+1,s.begin()+i);
            }
        }
        string ans;
        for(int i = 0;i<m;i++)
        {
            if(s[i]!='('&&s[i]!=')')
            {
                ans += s[i];
            }
        }
        return ans;
    }
};