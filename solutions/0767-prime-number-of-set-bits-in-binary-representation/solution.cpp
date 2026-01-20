class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int prime=0;
        while(left<=right)
        {
            int count=0;
            int x=left;
            int d=0;
            while(x>0)
            {
                if(x%2==1)
                {
                    count++;
                }
                x=x/2;
            }
            if(count==2)
            {
                prime++;
            }
            else if(count==1)
            {
                d++;
            }

            else
            {
            for(int i=2;i<count;i++)
            {
                if(count%i==0)
                {
                    d++;
                    break;
                }
            }
            }
            if(!d&&count!=2)
            {
                prime++;
            }
            left++;


        }
        return prime;
        
    }
};
