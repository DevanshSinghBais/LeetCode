class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int m= nums.size();
        int count=0,k=0;
        for(int i=0;i<m;i++)
        {
            if(nums[i]!=val)
            {
                nums[k++]=nums[i];
                count++;
            }
        }
        return count;
    }
};
