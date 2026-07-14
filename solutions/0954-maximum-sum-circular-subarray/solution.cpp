class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;

        int curMax = 0, maxSum = INT_MIN;
        int curMin = 0, minSum = INT_MAX;

        for (int x : nums) {
            curMax = max(curMax + x, x);
            maxSum = max(maxSum, curMax);

            curMin = min(curMin + x, x);
            minSum = min(minSum, curMin);

            total += x;
        }

        if (maxSum < 0)
            return maxSum;

        return max(maxSum, total - minSum);
    }
};
