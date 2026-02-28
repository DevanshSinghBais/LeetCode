class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int m = nums.size();
        vector<int>ans(m);
        long long product = 1;
        int count0 = 0;
        for(int i = 0;i<m;i++)
        {
            if(nums[i]==0)
            {
                count0++;
            }
            else
            {
            product = product*nums[i];
            }
        }
        if(count0>1)
        {
            for(int i = 0;i<m;i++)
            {
                ans[i]=0;
            }
        }
        else if(count0==1)
        {
            for(int i = 0;i<m;i++)
            {
                if(nums[i]==0)
                {
                    ans[i]=product;
                }
                else
                {
                    ans[i]=0;
                }
            }
        }
        else
        {
            for(int i = 0;i<m;i++)
            {
                ans[i]= product/nums[i];
            }
        }
        return ans;
    }
};
