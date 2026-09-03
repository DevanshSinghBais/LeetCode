class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        
        int m = nums.size();
        int cnt1 = 0,cnt2 = 0;
        int mn = INT_MAX;
        for(int i = 0;i<m;i++)
            {
                if(nums[i]%2)
                {
                   cnt1++;
                    
                }
                else
                {
                    cnt2++;
                }
                mn = min(mn,nums[i]);
            }
        if(cnt1==m||cnt1==0)
        {
            return true;
        }
        else
        {
            if(mn%2)
            {
                return true;
            }
        }
        return false;
    }
};