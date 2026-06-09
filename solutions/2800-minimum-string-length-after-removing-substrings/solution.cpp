class Solution {
public:
    int minLength(string s) {
        int m = s.length();
        stack<int>st;
        for(int i = 0;i<m;i++)
        {
            if(st.empty()||(s[i]!='D'&&s[i]!='B'))
            {
                st.push(s[i]);
            }
            else
            {
                if(s[i]=='D')
                {
                    if(st.top()=='C')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
                else if(s[i]=='B')
                {
                    if(st.top()=='A')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(s[i]);
                    }
                }
            }
        }
        return st.size();

    }
};
