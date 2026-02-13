class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> v;
        int m = intervals.size();
        
        if(m == 0) return v;
        
        sort(intervals.begin(), intervals.end());
        
        int a = 0;

        for(int i = 0; i < m; i++)
        {
            if(i == 0)
            {
                v.push_back({intervals[0][0], intervals[0][1]});
            }
            else if(v[a][1] >= intervals[i][0])
            {
                v[a][1] = max(v[a][1], intervals[i][1]);
            }
            else
            {
                a++;
                v.push_back({intervals[i][0], intervals[i][1]});
            }
        }

        return v;
    }
};

