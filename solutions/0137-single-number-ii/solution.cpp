class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int d=0;
        for(int i=0;i<n;i++)
        {
            d= d^nums[i];
        }
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==nums[i])
            {
                d = d^nums[i-1];
                i+=2;
            }
        }
        return d;
    }
};
