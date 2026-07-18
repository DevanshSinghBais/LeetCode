class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.length(),n = t.length();
        int j = 0;
        for(int i = 0;i<m;i++)
        {
            char c = s[i];
            while(j<n&&t[j]!=c)
            {
                j++;
            }
            if(j==n)return false;
            else
            {
                j++;
            }

        }
        return true;
    }
};
