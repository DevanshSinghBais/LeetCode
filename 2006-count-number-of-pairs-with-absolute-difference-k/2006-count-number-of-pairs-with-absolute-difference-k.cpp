class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int, int> mpp;
        int ans = 0;

        for (int x : nums) {
            if (mpp[x - k]) {
                ans += mpp[x - k];
            }

            if (mpp[x + k]) {
                ans += mpp[x + k];
            }

            mpp[x]++;
        }

        return ans;
    }
};