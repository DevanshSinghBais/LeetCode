class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]%2!=0&&a[j]%2==0)
                {
                    swap(a[i],a[j]);
                }
            }
        }

        return a;
        
    }
};
