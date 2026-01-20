class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int x : nums) ans ^= x;

        int p = ans;

        int pos = 0;
        while ((ans & 1) == 0) {
            pos++;
            ans >>= 1;
        }

        int x = 1 << pos;
        int ans1 = 0;

        for (int v : nums) {
            if ((v & x) == 0) {
                ans1 ^= v;
            }
        }

        return {ans1, p ^ ans1};
    }
};

