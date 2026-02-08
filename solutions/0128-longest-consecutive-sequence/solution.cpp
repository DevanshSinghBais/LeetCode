class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m = nums.size();
        int len=1;
        int maxlen=INT_MIN;
        if(m==0||m==1)
        {
            return m;
        }
        
        for(int i=0;i<m-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                maxlen = max(len,maxlen);
                continue;
            }
            if(nums[i]+1==nums[i+1])
            {
                len++;
            }
            else
            {
               maxlen = max(len,maxlen);
               len=1;
            }
            maxlen = max(len,maxlen);

        }
        return maxlen;
        
    }
};
