class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        int sum1 = 0 , sum2 = 0;
        for(int i = 0;i<n;i++)
        {
            sum1+=nums[i];
            sum2+=i+1;
        }
        int p = sum1-sum2;
        long long sum4 = (1LL * n * (n + 1) * (2LL * n + 1)) / 6;
        long long sum3 = 0;
        for(int i=0;i<n;i++)
        {
            sum3 += 1LL * nums[i] * nums[i];

        }
        int q = sum3-sum4;
        int r = q/p;
        int s = (r+p)/2;
        ans.push_back(s);
        ans.push_back(s-p);
        return ans;

       
        
        
    }
};
