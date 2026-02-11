class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        map<pair<int,int>,int>mpp;
        for(int row = 1;row<=numRows;row++)
        {
            vector<int>v;
            for(int col=1;col<=row;col++)
            {

                if(col==1||col==row)
                {
                    v.push_back(1);
                    mpp[{row,col}]++;
                }
                else
                {
                    v.push_back(mpp[{row-1,col-1}]+mpp[{row-1,col}]);
                    mpp[{row,col}]=mpp[{row-1,col-1}]+mpp[{row-1,col}];
                }
            }
            ans.push_back(v);

        }
        return ans;
        
        
    }
};
