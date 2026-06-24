class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        if(intervals.empty())
        {
            intervals.push_back(newInterval);
            return intervals;
        }

        int x = newInterval[0];
        int y = newInterval[1];

        for(int i = 0; i < intervals.size(); i++)
        {
            // New interval comes before current interval
            if(y < intervals[i][0])
            {
                intervals.insert(intervals.begin() + i, {x, y});
                return intervals;
            }

            // Overlap
            if(intervals[i][0] <= y && intervals[i][1] >= x)
            {
                intervals[i][0] = min(intervals[i][0], x);
                intervals[i][1] = max(intervals[i][1], y);

                int j = i + 1;

                while(j < intervals.size())
                {
                    if(intervals[i][1] >= intervals[j][0])
                    {
                        intervals[i][1] = max(intervals[i][1], intervals[j][1]);
                        intervals.erase(intervals.begin() + j);
                    }
                    else
                    {
                        break;
                    }
                }

                return intervals;
            }
        }

        // New interval comes after all intervals
        intervals.push_back({x, y});
        return intervals;
    }
};
