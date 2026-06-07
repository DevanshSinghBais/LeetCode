class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int>v(n,-1);
        stack<int>st;
        for(int i = 0;i<n;i++)
        {
           while(!st.empty()&&nums2[st.top()]<nums2[i])
           {
                v[st.top()] = nums2[i];
                st.pop();
           }
           st.push(i);
        }
        map<int,int>mpp;
        for(int i = 0;i<n;i++)
        {
            mpp[nums2[i]]  = v[i];
        }
        vector<int>v1(m);
        for(int i = 0;i<m;i++)
        {
            v1[i] = mpp[nums1[i]];
        }
        return v1;

    }
};
