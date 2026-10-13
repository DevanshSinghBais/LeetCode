class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]<0)nums[i] = nums[i]*-1;
        }
        sort(nums.begin(),nums.end(),greater<int>());
        int m = nums.size();
        int n;
        if(m%2)
        {
            n = m/2 + 1;

        }
        else
        {
            n = m/2;
        }
        long long s1 = 0,s2 = 0;
        for(int i = 0;i<m;i++)
        {
            if(i<n)s1 += nums[i]*nums[i];
            else
            {
                s2 += nums[i]*nums[i];
            }
        }
        return s1 - s2;
    }
};