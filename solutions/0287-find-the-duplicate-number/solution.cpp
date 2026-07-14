class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mpp;
        int ans;
        for(int i = 0;i<nums.size();i++)
        {
            if(!mpp[nums[i]])
            {
                mpp[nums[i]]++;
            }
            else
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};
