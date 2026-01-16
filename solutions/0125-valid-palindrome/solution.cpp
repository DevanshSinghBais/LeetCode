class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int k=0;
        for(int i=0;i<n;i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||s[i]>='0'&&s[i]<='9')
            {
                if(s[i]>='A'&&s[i]<='Z')
                {
                    s[k++]=s[i]+32;
                }
                else
                {
                    s[k++]=s[i];
                }
            }
        }
        int i=0,j=k-1;
        int m=0;
        
        while(i<j)
        {
            if(s[i]==s[j])
            {
                m++;
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
        
        
        
    }
};
