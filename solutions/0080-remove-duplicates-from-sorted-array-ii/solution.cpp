class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int cnt = 1;
        for(int i = 1;i<size;i++)
        {
            if(nums[i]==nums[i-1])
            {
                cnt++;
                if(cnt>2)
                {
                    if(i==nums.size()-1)
                    {
                        size--;
                        break;
                    }
                    rotate(nums.begin()+i,nums.begin()+i+1,nums.end());
                    
                    size--;
                    i--;
                }
            }
            else 
            {
                cnt = 1;
            }
        }

        return size;
    }
};
