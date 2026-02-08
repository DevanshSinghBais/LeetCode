class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<n-1;i++)
        {
            int maxnum = arr[i+1];
            for(int j=i+1;j<n;j++)
            {
                maxnum = max(maxnum,arr[j]);
            }
            arr[i]=maxnum;
        }
        arr[n-1]=-1;
        return arr;


        
    }
};
