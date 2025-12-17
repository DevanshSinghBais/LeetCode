class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int d= INT_MIN;
        int sum =0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum==0)
        {
            d=0;
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                count++;
                if(count>=d)
                {
                    d= count;
                }
               
            }
             else
                {
                    count=0;
                }
        }
        }
        
        return d;
        
    }
};
