class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int n = arr.size();
        int k=0;
        arr[k++]=arr[0];
        for(int i=1;i<n;i++)
        {
            arr[k++]=arr[i]+arr[i-1];
        }
        return arr;
        
    }
};
