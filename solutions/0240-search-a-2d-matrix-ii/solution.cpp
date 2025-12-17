class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();        // number of rows
        int cols = matrix[0].size();     // number of columns
        int d=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(matrix[i][j]==target)
                {
                    d++;
                    
                }
            }
        }
        if(!d)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }
};
