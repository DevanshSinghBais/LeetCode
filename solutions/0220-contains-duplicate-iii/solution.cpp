class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n = nums.size();
        if (n == 0 || indexDiff <= 0) return false;

        set<long long> s;  // stores values in current window

        for (int i = 0; i < n; i++) {
            long long x = nums[i];

            // We want some y in s with: |y - x| <= valueDiff
            // That means y in [x - valueDiff, x + valueDiff]
            long long low = x - (long long)valueDiff;

            auto it = s.lower_bound(low);  // first element >= low

            // Check if this candidate is also <= x + valueDiff
            if (it != s.end() && *it <= x + (long long)valueDiff) {
                return true;
            }

            // Insert current value into the window
            s.insert(x);

            // Keep window size <= indexDiff
            if ((int)s.size() > indexDiff) {
                s.erase((long long)nums[i - indexDiff]);
            }
        }

        return false;
    }
};

