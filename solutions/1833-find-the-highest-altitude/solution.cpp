class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int height = 0;
        int mx = 0;
        for(int i = 0;i<gain.size();i++)
        {
            height += gain[i];
            mx = max(height,mx);
        }
        return mx;
    }
};
