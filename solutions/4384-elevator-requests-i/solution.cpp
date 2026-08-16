class Solution {
public:
    int elevatorRequests(int n, vector<int>& r) {
        long long ans = 0;
        int in = 0;
        for(int i = 0;i<r.size();i++)
            {
                ans += abs(r[i]-in);
                in = r[i];
            }
        return ans;
    }
};
