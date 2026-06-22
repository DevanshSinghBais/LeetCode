class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int g = __gcd(10, k);
        if(g==1)
        {
            int rem = 0;

for (int len = 1; ; len++) {
    rem = (rem * 10 + 1) % k;
    if (rem == 0)
        return len;
}

        }
        return -1;
    }
};
