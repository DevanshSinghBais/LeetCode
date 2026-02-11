class Solution {
public:
    vector<int> getRow(int rowIndex) {
        return nCr(rowIndex);
        

    }
    vector<int> nCr(int row)
    {
        vector<int>v;
        
        int col = 1;
        
        while(col<=row+1)
        {
            int a = 0;
            long long multiply = 1;
            if(col==1||col==row+1)
            {
                v.push_back(1);

            }
            else
            {
                while(a<col-1)
                {
                    multiply = multiply*(row-a)/(a+1);
                    a++;
                }
                v.push_back(multiply);
            }
            col++;
            

        }
        return v;
    }
};
