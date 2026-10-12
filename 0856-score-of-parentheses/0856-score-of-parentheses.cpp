class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int curr = 0;

        for (char c : s) {
            if (c == '(') {
                st.push(curr);
                curr = 0;
            }
            else {
                int prev = st.top();
                st.pop();

                if (curr == 0) {
                    curr = 1;
                }
                else {
                    curr = 2 * curr;
                }

                curr += prev;
            }
        }

        return curr;
    }
};