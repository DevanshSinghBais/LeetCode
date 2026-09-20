class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        int m = nums.size();
        int i = m-1;
        int mx = 0;
        while(i>=0)
        {
            mx = max(mx,nums[i]);
            v[i] = mx;
            i--;
        }
        int ans = -1;
        for(int i = 0;i<m;i++)
        {
            if(v[i]==nums[i])continue;
            else
            {
                ans = max(ans,v[i]-nums[i]);
            }
        }
        return ans;
    }
};