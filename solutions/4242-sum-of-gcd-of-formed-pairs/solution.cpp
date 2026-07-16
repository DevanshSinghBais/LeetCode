class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx = nums[0];
        vector<int>pre(nums.size());
        pre[0] = nums[0];
        
        for(int i = 1;i<nums.size();i++)
        {
            mx = max(nums[i],mx);
            pre[i] = gcd(nums[i],mx);
        }
        sort(pre.begin(),pre.end());
        int i = 0,j = pre.size()-1;
        long long sum = 0;
        while(i<j)
        {
            sum += gcd(pre[i],pre[j]);
            i++;
            j--;
        }
        return sum;
        
        


    }
};
