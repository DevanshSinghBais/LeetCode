class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        

        int k=0;
         for(int j=m;j<n+m;j++)
        {
            if(nums1[j]==0)
            {
             nums1[j]=nums2[k++];
            }
        }
       sort(nums1.begin(), nums1.begin() + m + n);

        
    }
};
