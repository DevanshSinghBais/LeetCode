class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> arr1(n, vector<int>(n));

        int sr = 0, er = n - 1;
        int sc = 0, ec = n - 1;
        int k = 1;

        while (sr <= er && sc <= ec) {

            // top row
            for (int i = sc; i <= ec; i++) {
                arr1[sr][i] = k++;
            }
            sr++;

            // right column
            for (int i = sr; i <= er; i++) {
                arr1[i][ec] = k++;
            }
            ec--;

            // bottom row
            if (sr <= er) {
                for (int i = ec; i >= sc; i--) {
                    arr1[er][i] = k++;
                }
                er--;
            }

            // left column
            if (sc <= ec) {
                for (int i = er; i >= sr; i--) {
                    arr1[i][sc] = k++;
                }
                sc++;
            }
        }

        return arr1;
    }
};

