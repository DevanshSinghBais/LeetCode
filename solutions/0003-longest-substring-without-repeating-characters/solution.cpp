class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m = s.length();
        int len = 0;
        int maxlen = 0;
        unordered_map<char,int>mpp;
        for(int i = 0;i<m;i++)
        {
            if(mpp.find(s[i])!=mpp.end())
            {
                len = max(len,mpp[s[i]]+1);
            }
            mpp[s[i]] = i;
            maxlen = max(i-len+1,maxlen);
        }
        return maxlen;
    }
};

