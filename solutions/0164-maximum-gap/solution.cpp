class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int d;
        if(n<2)
        {
            return 0;
        }
        
        else
        {
             d= nums[1]-nums[0];
            for(int i=0;i<n-1;i++)
            {
                if(nums[i+1]-nums[i]>=d)
                {
                    d= nums[i+1]-nums[i];
                }
            }

        }
        return d;
        
    }
};
