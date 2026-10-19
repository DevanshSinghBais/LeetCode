class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>v;
        map<int,int>mpp;
        for(int i = 0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int j = 0;
        for(auto it:mpp)
        {
            if(it.first==target)
            {
                for(int k = 0;k<it.second;k++)
                {
                    v.push_back(j++);
                }
                break;
            }
            j += it.second;
        }
        return v;
    }
};