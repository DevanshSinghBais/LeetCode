class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
      int xr = 0;
      long long sum = 0;
      for(int i = 0;i<nums.size();i++)
      {
        xr = xr^nums[i];
        sum += nums[i];
      }
      if(xr)return nums.size();
      if(!sum)return 0;

    
      return nums.size()-1;
    }
};
