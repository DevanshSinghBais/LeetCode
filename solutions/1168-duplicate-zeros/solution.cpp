class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
        int n = nums.size();
        int zeros = 0;

        // step 1: count zeros
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                zeros++;
        }

        // step 2: two pointers
        int i = n - 1;
        int j = n + zeros - 1;

        while (i >= 0) {
            if (j < n)
                nums[j] = nums[i];

            if (nums[i] == 0) {
                j--;
                if (j < n)
                    nums[j] = 0;
            }
            i--;
            j--;
        }
    }
};

