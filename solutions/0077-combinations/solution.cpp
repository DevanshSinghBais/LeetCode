class Solution {
public:

    void matches(vector<vector<int>>& v, int n, int k,
                 vector<int>& b, int i, int j)
    {
        if(i == k)
        {
            v.push_back(b);
            return;
        }

        if(j > n)
            return;

        
        b.push_back(j);
        matches(v, n, k, b, i + 1, j + 1);
        b.pop_back();

        
        matches(v, n, k, b, i, j + 1);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        vector<int> b;

        matches(v, n, k, b, 0, 1);

        return v;
    }
};
