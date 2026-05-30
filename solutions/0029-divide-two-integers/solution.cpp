class Solution {
public:
    int divide(int dividend, int divisor) {
      using ll = long long;
      if(dividend==-2147483648&&divisor == -1)
      {
        return 2147483647;
      }

return (ll(dividend) / ll(divisor));
        
    }
};
