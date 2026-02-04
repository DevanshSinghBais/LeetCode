class Solution {
public:
    int firstUniqChar(string s) {
        int min=-1;
        if(s.length()==1)
        {
            return 0;
        }
        if(s.length()==0)
        {
            return -1;
        }
        for(int i=0;i<s.length();i++)
        {
            if(i==0)
            {
                int p=i+1;
                int count=1;
                while(p<s.length())
                {
                    if(s[i]==s[p])
                    {
                        count++;
                        break;
                    }
                    else
                    {
                        p++;
                    }
                }
                if(count==1)
                {
                    return i;
                }

            }
            else if(i==s.length()-1)
            {
                int p=i-1;
                int count=1;
                while(p>=0)
                {
                    if(s[i]==s[p])
                    {
                        count++;
                        break;
                    }
                    else
                    {
                        p--;
                    }
                }
                if(count==1)
                {
                    return i;
                }
                else
                {
                    return -1;
                }
            }
            else
            {
            int k = i-1;
            int j = i+1;
            int count=1;
            while(k>=0||j<s.length())
            {
               
                if(k==-1&&j<s.length())
                {
                    k++;
                }
                else if(k>=0&&j==s.length())
                {
                    j--;
                }
                else
                {
                    if(s[i]==s[j]||s[i]==s[k])
                    {
                        count++;

                        break;
                    }
                    else
                    {
                        j++;
                        k--;
                    }
                }
            }
            if(count==1)
            {
                return i;
            }
            }
        }
        return -1;
        
    }
};
