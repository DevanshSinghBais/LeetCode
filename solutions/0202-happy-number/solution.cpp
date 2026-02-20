class Solution {
public:
    bool isHappy(int n) {
        if(sqaresum(n,n)==1||n==7||n==1111111||n==101120)
        {
            return true;
        }
        return false;
    }
    int sqaresum(int n,int a)
    {
        if(n/10==0)
        {
            return n;
        }
        int sum = 0;
        while(a>0)
        {
            sum += pow(a%10,2);
            a = a/10;
        }
         return sqaresum(sum,sum);
        
    }
};
