class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>v;
        int m = nums.size();
        for(int i=0;i<m;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second>m/3)
            {
                v.push_back(it.first);
            }
        }
        sort(v.begin(),v.end());
        return v;
        
    }
};
