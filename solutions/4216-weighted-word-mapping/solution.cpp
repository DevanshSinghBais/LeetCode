class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string b;
        map<char,int>mpp;
        int i = 0;
        for(char ch = 'a';ch<='z';ch++)
            {
                mpp[ch] = weights[i++];
            }
        for(int j = 0;j<words.size();j++)
            { int sum = 0;
                for(int k = 0;k<words[j].size();k++)
                    {
                        sum += mpp[words[j][k]];
                    }

             sum = sum%26;
             b.push_back('z'-sum);
            }
        return b;
    }
};
