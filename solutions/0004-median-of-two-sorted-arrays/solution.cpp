class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int sum=0,count=0;
        int m= nums1.size();
        int n= nums2.size();
      
        vector<int> nums3(m + n);
       int k=0;
       for(int i=0;i<m;i++)
       {
            nums3[k++]=nums1[i];
       }
       

       for(int j=0;j<n;j++)
       {
            nums3[k++]=nums2[j];
       }
        sort(nums3.begin(),nums3.end());
        if(k%2==0)
        {
            return (nums3[(k/2)-1]+nums3[k/2])/2.0;

        }
        else
        {
            return nums3[k/2];
        }
      


      




        
    }
};
