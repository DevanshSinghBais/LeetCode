class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int m = nums.size();
        
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = i+1;
        int k = m-1;
        while(i<m-2)
        {
            if(nums[i]+nums[j]+nums[k]==0)
            {
                vector<int>temp = {nums[i],nums[j],nums[k]};
                st.insert(temp);
                j++;
                
            }
            else if(nums[i]+nums[j]+nums[k]<0)
            {
                j++;
            }
            else
            {
                k--;
            }
            if(j>=k)
            {
                int prev = i;
                while(nums[prev]==nums[i]&&i<m-2)
                {
                    i++;
                }
                j=i+1;
                k = m-1;
            }
        }


        
        

        
       return vector<vector<int>>(st.begin(), st.end());

    }
};

