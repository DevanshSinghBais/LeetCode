class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size();
        int m = l.size();
        vector<bool>v;
        for(int i = 0;i<m;i++)
        {
            vector<int>temp;
            for(int j = l[i];j<=r[i];j++)
            {
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end(),greater<int>());
            int mn = temp[1] - temp[0];
            bool found = true;
            for(int k = 1;k<temp.size();k++)
            {
                if(temp[k]-temp[k-1]!=mn)
                {
                    found = false;
                    break;
                }
            }
            v.push_back(found);
        }
        return v;

    }
};