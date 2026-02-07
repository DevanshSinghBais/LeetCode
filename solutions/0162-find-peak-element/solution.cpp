class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int m = nums.size();
        if(m==1)
        {
            return 0;
        }
       
        
        int start=0,end=m-1;
        if(nums[start]>nums[start+1])
        {
            return start;
        }
        if(nums[end]>nums[end-1])
        {
            return end;
        }
        start++;
        end--;
        while(start<=end)
        {
            if(nums[start-1]<nums[start]&&nums[start]>nums[start+1])
            {
                return start;
            }
            if(nums[end-1]<nums[end]&&nums[end]>nums[end+1])
            {
                return end;
            }
            start++;
            end--;
        }
        return start;

        
    }
};
