class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int>mpp;
        set<pair<int,int>>st;
        for(int i = 0;i<nums.size();i++)
        {
            if(mpp[nums[i]-k])
            {
                st.insert({nums[i]-k,nums[i]});
            }
            if(mpp[nums[i]+k])
            {
                st.insert({nums[i],nums[i]+k});
            }
            mpp[nums[i]]++;
        }
        return st.size();
    }
};