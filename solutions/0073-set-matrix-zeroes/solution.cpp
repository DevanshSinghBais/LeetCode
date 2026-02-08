class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        map<pair<int,int>,int>mpp;
        {
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(matrix[i][j]==0)
                    {
                        mpp[{i,j}]++;
                    }
                }
            }
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(matrix[i][j]==0&&mpp[{i,j}]==1)
                    {
                        int top = i-1,bottom = i+1,right= j+1,left= j-1;
                        while(top>=0)
                        {
                            matrix[top][j]=0;
                            top--;
                        }
                        while(left>=0)
                        {
                            matrix[i][left]=0;
                            left--;
                        }
                        while(right<n)
                        {
                            matrix[i][right]=0;
                            right++;
                        }
                        while(bottom<m)
                        {
                            matrix[bottom][j]=0;
                            bottom++;
                        }
                    }
                }
            }
        }

        
        
    }
};
