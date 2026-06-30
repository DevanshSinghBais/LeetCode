class Solution {
public:
    int numberOfSubstrings(string s) {
        long long cnt = 0;
        int n = s.size();

        map<char,int> mpp;
        int j = 0;

        for(int i = 0; i < n - 2; i++)
        {
            while((mpp['a'] < 1 || mpp['b'] < 1 || mpp['c'] < 1) && j < n)
            {
                mpp[s[j]]++;
                j++;
            }

            if(mpp['a'] >= 1 && mpp['b'] >= 1 && mpp['c'] >= 1)
            {
                cnt += n - (j - 1);
            }
            else
            {
                break;
            }

            mpp[s[i]]--;      
        }

        return cnt;
    }
};
