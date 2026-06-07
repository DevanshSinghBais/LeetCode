class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v(nums.size(),-1);
        stack<int>st;
        for(int i = 0;i<2*nums.size();i++)
        {
            int j = i;
            if(i>=nums.size())
            {
                
                i = i%nums.size();
                
            }
           
                while(!st.empty()&&nums[st.top()]<nums[i])
                {
                    v[st.top()] = nums[i];
                    st.pop();

                }
                st.push(i);
                i = j;
            
        }
        return v;
    }
};
