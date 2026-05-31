class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        if (n <= 2) return n; 

        int max_points = 1;

        for (int i = 0; i < n; i++) {
            vector<double> slopes;

            for (int j = i + 1; j < n; j++) {
                double dy = points[j][1] - points[i][1];
                double dx = points[j][0] - points[i][0];

                if (dx == 0) {
                    slopes.push_back(INFINITY); 
                } else {
                    double slope = dy / dx;
                    if (slope == -0.0) slope = 0.0; 
                    slopes.push_back(slope);
                }
            }
            sort(slopes.begin(), slopes.end());
            int cnt = 0;
            int consecutive = 1;

            for (int k = 1; k < slopes.size(); k++) {
                if (slopes[k] == slopes[k - 1]) {
                    consecutive++; 
                } else {
                    
                    cnt = max(cnt, consecutive);
                    consecutive = 1; 
                }
            }
            
            if (slopes.size() > 0) {
                cnt = max(cnt, consecutive);
            }
            max_points = max(max_points, cnt + 1);
        }

        return max_points;
    }
};
