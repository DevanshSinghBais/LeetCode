class Solution {
public:
    int numTrees(int n) {
        long long x;
        if(n%2==0)
        {
            int b = n/2;
             x = 1LL << b;

        }
        else
        {
            int b = (n+1)/2;
             x = 1LL << b;

        }
        long long p = 1;
        long long q = 1;
        int c = 1,d = 1;
        for(int i = 0;i<n/2;i++)
        {
            p = p*(2*n-c);
            c+=2;
            q = q*d;
            d++;
        }
        long long num = x * p;
        long long den = q * (n + 1);

        return num / den;

    }
};
