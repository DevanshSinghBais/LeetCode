class Solution {
public:
    string convert(string s, int numRows) {
        int m = s.length();
        string b;
        int col = 0;
        int tot = 0;
        bool check = true;
        if(numRows == 1) return s;
        while(tot<m)
        {
            if(check)
            {
                tot += numRows;
                col++;
                check = false;
            }
            else
            {
                tot += numRows -2;
                col += numRows -2;
                check = true;
            }
        }
        vector<vector<char>> v(numRows, vector<char>(col, '0'));
        int i = 0,j = 0;
        int d = 0;
        while(d<m)
        {
            for(i = 0; i < numRows && d<m; i++)
            {
                v[i][j] = s[d++];
                
            }
            i--;
            
            while(i - 1 > 0 && d<m)
            {
                i--;
                j++;
                v[i][j] = s[d++];
                

            }
            j++;
        }
        for(int p = 0;p<v.size();p++)
        {
            for(int q = 0;q<v[0].size();q++)
            {
                if(v[p][q]!='0')
                {
                    b.push_back(v[p][q]);
                }
            }
        }
        return b;
    }
};
