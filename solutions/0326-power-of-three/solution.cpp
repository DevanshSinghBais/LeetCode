class Solution {
public:
    bool isPowerOfThree(int n) {
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
                    p=p*3;
                }
            }
        }
        return false;
    }
};
