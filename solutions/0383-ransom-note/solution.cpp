class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mpp1,mpp2;
        for(int i = 0;i<ransomNote.length();i++)
        {
            mpp1[ransomNote[i]]++;
        }
        for(int i = 0;i<magazine.length();i++)
        {
            mpp2[magazine[i]]++;
        }
        bool ans  = true;
        for(auto &it:mpp1)
        {
            char c = it.first;
            if(it.second>mpp2[c])
            {
                ans  = false;
                break;
            }
        }
        return ans;
        

    }
};
