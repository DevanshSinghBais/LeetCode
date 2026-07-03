class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        map<string,int>mpp;
        int m = s.length();
        string p;
        vector<string>v;
        if(m<10)
        {
            return v;
        }
        int j = 0;
        while(j<10)
        {
            p += s[j];
            j++;
        }
        mpp[p]++;
        while(j<m)
        {
            p.erase(0, 1);
            p += s[j];
            j++;
            mpp[p]++;
        }
        for(auto it:mpp)
        {
            if(it.second>1)
            {
                v.push_back(it.first);
            }
        }
        return v;
        
    }
};
