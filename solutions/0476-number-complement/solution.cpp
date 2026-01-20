class Solution {
public:
    int findComplement(int num) {
        long long p=1;
        long long sum=0;
        while(num>0)
        {
            if(num%2==0)
            {
                sum+=1*p;
            }
            else
            {
                sum+=0*p;
            }
            p=p*2;
            num/=2;
        }
        return sum;
    }
};
