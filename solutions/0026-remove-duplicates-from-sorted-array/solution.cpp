class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count =0;
        int m= nums.size();
        if (m == 0)
        {
         return 0;
        }
        int k=0;
        for(int i=1;i<m;i++)
        {
            if(nums[i-1]!=nums[i])
            {
                nums[k++]=nums[i-1];

                count++;

              

            }
           
        }
         
                nums[k]=nums[m-1];
                count++;
            
        return count;
        
    }
};
