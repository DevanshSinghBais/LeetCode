class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        long long resourcesleft = k;
        long long min_cost = 0;
        long long op = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (resourcesleft >= nums[i]) {
                resourcesleft -= nums[i];
            } else {
                long long need = nums[i] - resourcesleft;
                long long cnt = (need + k - 1) / k;

                __int128 add = (__int128)cnt * (2 * op + cnt - 1) / 2;
                min_cost = (min_cost + (long long)(add % 1000000007)) % 1000000007;

                op += cnt;
                resourcesleft += cnt * 1LL * k;
                resourcesleft -= nums[i];
            }
        }

        return min_cost % 1000000007;
    }
};
