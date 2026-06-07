class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        int m = a.size();
        vector<int>v(m,0);
        stack<int>st;
        for(int i = 0;i<m;i++)
        {
            while(!st.empty()&&a[st.top()]<a[i])
            {
                v[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return v;
    }
};
