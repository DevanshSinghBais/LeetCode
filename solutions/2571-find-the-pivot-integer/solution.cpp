class Solution {
public:
    int pivotInteger(int n)
    {
        float x;
        int d;
        x=pow((pow(n,2)+n)/2,1/2.0);
        d=(int)x;
        if(x-d==0)
        {
            return x;
        }
        else
        {
            return -1;
        }

        
    }
};
