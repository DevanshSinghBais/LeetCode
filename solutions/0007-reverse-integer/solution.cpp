class Solution {
public:
    int reverse(long long x) {
        
        long long ans=0;
        if(x<0)
        {
           x = x*-1;
           while(x>0)
           {
            ans = ans*10+x%10;
            x=x/10;
            
           }
           if(-1*ans<pow(-2,31))
           {
            return 0;
           }
           return -1*ans;
        }
        else
        {
             while(x>0)
           {
            ans = ans*10+x%10;
            x=x/10;
            
           }
           if(ans>pow(2,31)-1)
           {
            return 0;
           }
        }
        return ans;
        
    }
};
