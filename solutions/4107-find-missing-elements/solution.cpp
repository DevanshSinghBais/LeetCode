class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        
        int p = nums[0];

        int m = nums.size();
        for(int i = 1;i<m;i++)
        {
            if(nums[i]-p>1)
            {
                while(p+1!=nums[i])
                {
                    ans.push_back(p+1);
                    p++;
                }
            }
            p = nums[i];
        }  

        return ans;
    }
};
