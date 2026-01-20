class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long sum=0;
        while(n>0)
        {
            sum+=n%2;
            n=n/2;

        }
        if(sum==1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};
