class Solution {
public:
    bool isPowerOfFour(int n) {
        int f=0;
        long long p=1;
        
        if(n<=0)
        {
            return false;
        }
        else 
        {
            while(p<=n)
            {
                if(p==n)
                {
                    return true;

                }
                else
                {
                    p=p*4;
                }
            }
        }
        return false;
        
    }
};
