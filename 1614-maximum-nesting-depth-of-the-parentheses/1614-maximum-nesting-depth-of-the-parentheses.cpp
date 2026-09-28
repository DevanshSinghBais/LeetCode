class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int mx = 0;

        for (char c : s) {
            if (c == '(') {
                st.push(c);
                mx = max(mx, (int)st.size());
            }
            else if (c == ')') {
                st.pop();
            }
        }

        return mx;
    }
};