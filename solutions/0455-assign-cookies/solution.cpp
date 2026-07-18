class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int m = s.size();
        int i = 0,j = 0;
        int ans = 0;
        while(j<m&&i<g.size())
        {
            if(g[i]<=s[j])
            {
                ans++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return ans;

    }
};
