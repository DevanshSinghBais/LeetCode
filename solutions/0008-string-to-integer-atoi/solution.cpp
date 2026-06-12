class Solution {
public:
    int myAtoi(string s) {
        int m = s.length();
        long long b = 0;
        int x = 1;
        long long d = 10;
        int ivis = 0;
        for(int i = 0;i<m;i++)
        {
            if(!isdigit(s[i]))
            {
                if(s[i]==' ')
                {
                    if(ivis!=0)
                    {
                        break;
                    }
                    continue;
                }
                else if(ivis==0&&s[i]=='-')
                {
                    x = -1;
                    ivis++;
                }
                else if(ivis==0&&s[i]=='+')
                {
                    x = 1;
                    ivis++;
                }
                else
                {
                    break;
                }

            }
            else
            {
                if(s[i]=='0'&&b==0)
                {
                    ivis++;
                    continue;

                }
                else
                {
                    int val = s[i] - '0';
                    if(b>INT_MAX/10||(b==INT_MAX/10&&val>7))
                    {
                        return x==1?INT_MAX:INT_MIN;
                    }
                    
                    b = b*d + val;
                    ivis++;
                    
                }
            }
        }
        b = b*x;
        if(x==1&&b>INT_MAX)
        {
            return INT_MAX;
        }
        else if(x==-1&&b<INT_MIN)
        {
            return INT_MIN;
        }
        return b;

    }
};
