class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
     {
        int e,f;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    e=i;
                    f=j;
                   
                }
            }
        }
        return {e,f};
        
    }
};
