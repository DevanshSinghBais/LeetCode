class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(nums);
        sort(v.begin(),v.end());
        int smallest = v[0];  
        if(v==nums)
        {
            return true;
        }

       
        for(int i=1;i<=n;i++)
        {
            int temp = nums[n-1];
           for(int j=n-1;j>=1;j--)
           {
            nums[j]=nums[j-1];
           }
           nums[0]=temp;
           if(v==nums)
        {
            return true;
        }
        }
        
        return false;

        
        
        
    }
};
