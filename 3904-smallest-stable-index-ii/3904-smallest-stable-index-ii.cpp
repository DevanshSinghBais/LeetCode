class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int m = nums.size();
        vector<int>v1,v2;
        int mn = INT_MAX,mx = INT_MIN;
        for(int i = m-1;i>=0;i--)
        {
            mn = min(nums[i],mn);
            v2.push_back(mn);
        }
        reverse(v2.begin(),v2.end());
        for(int i = 0;i<m;i++)
        {
            mx = max(nums[i],mx);
            v1.push_back(mx);
        }
        int ans = -1;
        for(int i = 0;i<m;i++)
        {
            if(v1[i]-v2[i]<=k)
            {
                ans = i;
                break;
            }
        }
        return ans;

    }
};