class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int m = nums.size();
        vector<bool>v(nums[m-1],false);
        for(int i = 0;i<nums.size();i++)
        {
            if(!(nums[i]%k))
            {
                int p = nums[i]/k - 1;
                v[p] = true;

            }
        }
        
        for(int i = 0;i<v.size();i++)
        {
            if(!v[i])
            {
                return (i+1)*k;
            }
        }
        return (nums.size()+1)*k;
    }
};