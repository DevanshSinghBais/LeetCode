class Solution {
public:
    int longestValidParentheses(string s) {
        
        int m = s.length();
        vector<int>v1(m,0);
        
        stack<pair<char,int>> st;
        int d = 0;
        for(int i = 0;i<m;i++)
        {
            if(st.empty())
            {
                
                if(s[i]=='(')
                {
                    st.push({s[i],d});
                    v1[d++] += 1;
                    
                }
                else
                {
                    d++;
                }
            }
            else
            {
                if(s[i]==')')
                {
                    if(st.top().first=='(')
                    {
                        v1[st.top().second] += 1;
                        st.pop();
                    }
                    
                }
                else
                {
                    st.push({s[i],d});
                    v1[d++] += 1;
                }
            }
        }
        int cnt = 0,mcnt = 0;
        for(int i = 0;i<m;i++)
        {
            if(v1[i]==2)
            {
                cnt+=2;
                mcnt = max(cnt,mcnt);
            }
            else
            {
                cnt  = 0;
            }
        }
        return mcnt;
    }
};
