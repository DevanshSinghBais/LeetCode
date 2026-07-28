class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>mpp;
        for(int i = 0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }
        string b;
        char c;
        bool exist = false;
        for(auto &it:mpp)
        {
            if(it.second%2)
            {
                c = it.first;
                exist = true;
                
            }
            int n = it.second/2;
            b.insert(b.size() / 2, string(2 * n, it.first));
        }
        if(exist)
        {
            b.insert(b.size() / 2, string(1,c));
        }
        return b;
    }
};
