class Solution {
public:
    int reverse(int x) {
        vector<int> v;
        int sign = 1;

        if (x < 0) sign = -1;

        while (x) {
            v.push_back((x % 10) * sign);
            x /= 10;
        }

        long long ans = 0;

        for (int i = 0; i < v.size(); i++) {
            ans = ans * 10 + v[i];
        }

        ans *= sign;

        if (ans > INT_MAX || ans < INT_MIN)
            return 0;

        return (int)ans;
    }
};
