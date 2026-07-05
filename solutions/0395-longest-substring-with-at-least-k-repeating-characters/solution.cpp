class Solution {
public:
    int longestSubstring(string s, int k) {

        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        vector<int> bad(s.size(), 0);

        
        for (int i = 0; i < s.size(); i++)
        {
            if (freq[s[i] - 'a'] > 0 && freq[s[i] - 'a'] < k)
                bad[i] = 1;
        }

        bool changed = true;

        while (changed)
        {
            changed = false;

            int i = 0;

            while (i < s.size())
            {
                while (i < s.size() && bad[i])
                    i++;

                if (i == s.size())
                    break;

                int start = i;

                vector<int> segFreq(26, 0);

                while (i < s.size() && !bad[i])
                {
                    segFreq[s[i] - 'a']++;
                    i++;
                }

                for (int j = start; j < i; j++)
                {
                    if (!bad[j] && segFreq[s[j] - 'a'] < k)
                    {
                        bad[j] = 1;
                        changed = true;
                    }
                }
            }
        }

        int len = 0;
        int curr = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (!bad[i])
            {
                curr++;
                len = max(len, curr);
            }
            else
            {
                curr = 0;
            }
        }

        return len;
    }
};
