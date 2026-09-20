class Solution {
public:
    int reverseDegree(string s) {
        int m = s.length();
        long long sum = 0;
        for(int i = 0;i<m;i++)
        {
            int p = 'z' - s[i] + 1;
            sum += p*(i+1);
        }
        return sum;
    }
};