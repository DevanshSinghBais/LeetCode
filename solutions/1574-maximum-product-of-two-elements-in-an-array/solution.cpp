class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m = nums.size();
        return (nums[m-1]-1)*(nums[m-2]-1);
    }
};
