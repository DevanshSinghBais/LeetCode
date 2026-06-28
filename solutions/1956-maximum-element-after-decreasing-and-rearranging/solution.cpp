class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int m = arr.size();
        sort(arr.begin(),arr.end());
        arr[0] = 1;
        for(int i = 1;i<m;i++)
        {
            if(abs(arr[i]-arr[i-1])>1)
            {
                arr[i] = arr[i-1]+1;
            }
        }
        return arr[m-1];

    }
};
