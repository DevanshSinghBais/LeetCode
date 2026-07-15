
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        long long sumodd = n*n;
        long long sumeven = n*(n+1);
        return gcd(sumodd,sumeven);
    }
};
