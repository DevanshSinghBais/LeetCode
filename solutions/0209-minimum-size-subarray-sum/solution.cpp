class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int m = nums.size();
        vector<int>v(m);
        
        int ans = INT_MAX;
        v[0] = nums[0];
        for(int i =1;i<m;i++)
        {
            v[i] = nums[i] + v[i-1];

        }
        int left = 0, right = 0;
        while(right<m)
        {
            if(left==0)
            {
                if(v[right]>=target)
                {
                    ans = min(ans,right - left + 1);
                    left++;
                }
                else
                {
                    right++;
                }
            }
            else
            {
                if(v[right]-v[left-1]>=target)
                {
                    ans = min(ans,right-left+1);
                    left++;
                }
                else
                {
                    right++;
                }
            }


        }
        if(ans==INT_MAX)
        {
            return 0;

        }
        return ans;
        
        
    }
};
