class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>v(5,0);
        for(int i = 0;i<text.length();i++)
        {
            if(text[i]=='b')
            {
                v[0]++;
            }
            else if(text[i]=='a')
            {
                v[1]++;
            }
            else if(text[i]=='l')
            {
                v[2]++;

            }
            else if(text[i]=='o')
            {
                v[3]++;
            }
            else if(text[i]=='n')
            {
                v[4]++;
            }
        }
        v[2] /= 2;
        v[3] /= 2;
        int ans  = INT_MAX;
        for(int j = 0;j<5;j++)
        {
            ans = min(ans,v[j]);
        }
        return ans;


    }
};
