class Solution {
public:
    bool checkPerfectNumber(int n) {
        vector<int> divisors;
        if(n==1)return false;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);

            if (i != n / i&&i!=1)
                divisors.push_back(n / i);
            }
        }
        long long sum = 0;

        for(int i = 0;i<divisors.size();i++)
        {
            sum += divisors[i];
        }

        if(sum==n)return true;

        return false;



    }
};
