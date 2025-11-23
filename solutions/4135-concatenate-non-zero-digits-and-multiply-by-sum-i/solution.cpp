class Solution {
public:
    long long sumAndMultiply(int n) 
    {
        long long x=0;
        long long sum=0;
        int  count =0,count1=0,c=n,m,p;
        int a=n;
        while(c>0)
            {
                m=c%10;
                if(m!=0)
                {
                    count1++;
                }
                
                sum = sum  + m;
                c=c/10;
                count++;
            }
        int b=1;
        for(int i=1;i<count;i++)
            {
                b=10*b;
            }
        int q=1;
         for(int i=1;i<count1;i++)
            {
                q=10*q;
            }
        for(int j=1;j<=count ; j++)
            {
               p =  (a/b)%10;
                if(p)
                {
                    x = x + p*q;
                    q = q/10;
                   
                }
                b=b/10;
                a=n;
                
            }
        return x*sum;
        
        
        
    }
};
