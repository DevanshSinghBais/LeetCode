class Solution 
{
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        int n= arr.size();
        int d=0;
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    swap(arr[i],arr[j]);
                }
            }
        }
        int k= arr[1]-arr[0];
        for(int m=0;m<n-1;m++)
        {
            if(arr[m+1]-arr[m]!=k)
            {
                d++;
               
            }
           
        }
        if(!d)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};
