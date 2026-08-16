class Solution {
public:
    int minPenalty(int p, vector<int>& l, vector<int>& a) {
        sort(a.begin(),a.end());
        sort(l.begin(),l.end());
        int mx = 0;
        int d = l[l.size()-1];
        for(int i = 0;i<a.size();i++)
            {
                if(a[i]%p>=d)
                {
                    mx = max(mx,p - a[i]%p);
                }
            }
        return mx;
    }
};
