class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mpp;
        int m = arr.size();
        int maxnumber = -1;
        for(int i=0;i<m;i++)
        {
            mpp[arr[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.first==it.second)
            {
               maxnumber = max(maxnumber,it.first);
            }
        }
        return maxnumber;
        
    }
};
