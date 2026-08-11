class Solution {
public:
    int missingInteger(vector<int>& nums) {

        // First find sequential prefix sum in ORIGINAL array
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - nums[i - 1] == 1)
                sum += nums[i];
            else
                break;
        }

        
        sort(nums.begin(), nums.end());

        
        int x = sum;

        while (true) {
            int i = lower_bound(nums.begin(), nums.end(), x) - nums.begin();

            if (i == nums.size() || nums[i] != x)
                return x;

            x++;
        }
    }
};
