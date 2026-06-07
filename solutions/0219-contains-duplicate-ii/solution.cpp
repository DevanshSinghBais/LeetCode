class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int m = nums.size();
        multimap<int, int> mpp;
        for(int i = 0;i<m;i++)
        {
            mpp.insert({nums[i], i});
        }
        for(auto it = mpp.begin(); next(it) != mpp.end(); ++it)
{
    auto nxt = next(it);

    int x = it->first;
    int y = nxt->first;
    if(x==y)
    {
        if( nxt->second - it->second<=k)
        {
            return true;
        }
    }
}
return false;


    }
};
