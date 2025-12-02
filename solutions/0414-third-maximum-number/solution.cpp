class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int d=0,e=n-1,f=0,k;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]!=nums[i])
            {
                d++;
            }
        }
        if(d<=1)
        {
            return nums[n-1];
        }
        else
        {
            while(e>=0)
            {
                if(nums[e]!=nums[e-1])
                {
                    f++;
                    if(f==2)
                    {
                        k=e-1;
                        return nums[k];
                        
                    }
                }
                e--;

            }
        }

        return nums[n-1];
    }
};
