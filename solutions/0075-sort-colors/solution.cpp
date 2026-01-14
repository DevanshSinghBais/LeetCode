class Solution {
public:
    void sortColors(vector<int>& nums) {
        int m = nums.size();
        for(int i=0;i<m-1;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                if(nums[j]<nums[i])
                {
                    int temp = nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                }
            }
        }
        
    }
};
