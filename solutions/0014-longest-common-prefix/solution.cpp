class Solution {
public:
    string longestCommonPrefix(vector<string>& words)
    {
        if(words.empty()) return "";

        string s;
        for(int j = 0; j < words[0].length(); j++)
        {
            char c = words[0][j];

            for(int i = 1; i < words.size(); i++)
            {
                if(j >= words[i].length() || words[i][j] != c)
                {
                    return s;
                }
            }

            s.push_back(c);
        }

        return s;
    }
};
