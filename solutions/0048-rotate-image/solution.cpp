class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        for(int i=0;i<cols;i++)
        {
            int x=0,y=rows-1;
            while(x<y)
            {
                swap(matrix[x][i],matrix[y][i]);
                x++;
                y--;
            }
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(i<j)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        
    }
};
