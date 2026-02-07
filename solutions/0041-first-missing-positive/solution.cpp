class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int p = nums.size();
        sort(nums.begin(),nums.end());
        
        int c=1;
        
        for(int i=0;i<p;i++)
        {
            if(nums[i]==c)
            {
                c++;
               
            }
            else if(i==p-1)
            {
                break;
            }
        }
        return c;
        
        
    }
};
