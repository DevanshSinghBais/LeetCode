class Solution {
public:
    string removeOuterParentheses(string s) {
        int m = s.length();
        stack<char>st;
        string b;
        for(int i = 0;i<m;i++)
        {
            if(s[i]=='(')
            {
                if(st.size()>0)
                {
                    st.push(s[i]);
                    b.append("(");
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else
            {
                if(st.size()==1)
                {
                    st.pop();
                }
                else
                {
                    st.pop();
                    b.append(")");
                }
            }
        }
        return b;
    }
};
