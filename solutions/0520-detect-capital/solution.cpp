class Solution {
public:
    bool detectCapitalUse(string word) {
        int m = word.size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            if(word[i]>='A'&&word[i]<='Z')
            {
                count++;
            }
        }
        if(count==0||count==m||(count==1&&(word[0]>='A'&&word[0]<='Z')))
        {
            return true;
        }
        return false;
    }
};
