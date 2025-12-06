class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int start,end,sum1,sum2;
        for(int i=0;i<n;i++)
        {
            sum1=0,sum2=0;
            if(i==0)
            {
               sum1=0;
               for(int j=1;j<n;j++)
               {
                sum2= sum2+ nums[j];
               }
               if(sum2==sum1)
               {
                return 0;
               }
            }
            else if(i==n-1)
            {
               sum2=0;
               for(int j=n-2;j>=0;j--)
               {
                sum1= sum1+ nums[j];
               }
               if(sum1==sum2)
               {
                return n-1;
               }
            }
            else
            {
                start = i-1;
                end= i+1;
                while(start>=0||end<n)
                {
                    if(start>=0)
                    {
                        sum1= sum1+ nums[start];
                    }
                    if(end<n)
                    {
                        sum2 = sum2 + nums[end];
                    }
                    start--;
                    end++;
                }
                if(sum1==sum2)
                {
                    return i;
                }
            }
        }
        return -1;
        
    }
};
