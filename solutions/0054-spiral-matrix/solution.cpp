class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int sr = 0, sc = 0, er = m - 1, ec = n - 1;
        vector<int> arr(m * n);
        int k = 0;

        while (sr <= er && sc <= ec) {

            // top row
            for (int i = sc; i <= ec; i++) {
                arr[k++] = matrix[sr][i];
            }
            sr++;

            // right column
            for (int i = sr; i <= er; i++) {
                arr[k++] = matrix[i][ec];
            }
            ec--;

            // bottom row (check needed)
            if (sr <= er) {
                for (int i = ec; i >= sc; i--) {
                    arr[k++] = matrix[er][i];
                }
                er--;
            }

            // left column (check needed)
            if (sc <= ec) {
                for (int i = er; i >= sr; i--) {
                    arr[k++] = matrix[i][sc];
                }
                sc++;
            }
        }
        return arr;
    }
};

