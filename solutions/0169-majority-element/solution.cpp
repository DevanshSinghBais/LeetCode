class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int m;
        int max,count=0,start=0;
        if(n==1)
        {
            return nums[0];
        }
        for(int i=n-1;i>=1;i--)
        {   
           if(nums[i]==nums[i-1])
           {
            count++;
            
           }
           if(!start||max<count)
           {
            max = count;
            m=nums[i];
            start++;
           }
           if(nums[i]!=nums[i-1])
           {
            count=0;
           }
        }
        return m;
        
    }
};
