class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        vector<int>v;
        v.push_back(-1);
        v.push_back(-1);
        int m = nums.size();
        map<int,int>mpp;
        for(int i = 0;i<m;i++)
            {
                mpp[nums[i]]++;
            }
        int p;
        int q;
        
        
        for(auto it:mpp)
            {
                p = it.first;
                q = it.second;
                break;
            }
        for(auto it:mpp)
            {
                if(it.second!=q)
                {
                    v[0] = p;
                    v[1] = it.first;
                    break;
                }
            }
        return v;
        
        
        
    }
};
