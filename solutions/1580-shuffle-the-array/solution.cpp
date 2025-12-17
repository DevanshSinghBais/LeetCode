class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
         vector<int> ans(2 * n); 
         int k = 0;
         int z = n;
         int b = 0;
        while(b<n&&z<2*n)
        {
            ans[k++]=nums[b];
            ans[k++]=nums[z];
            b++;
            z++;
        }
        return ans;
        
    }
};
