class MinStack {
public:
    vector<pair<int,int>> st;

    void push(int val) {
        st.emplace_back(
            val,
            st.empty() ? val : (val < st.back().second ? val : st.back().second)
        );
    }

    void pop() {
        st.pop_back();
    }

    int top() {
        return st.back().first;
    }

    int getMin() {
        return st.back().second;
    }
};
