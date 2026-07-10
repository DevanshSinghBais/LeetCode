class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0;
        map<char,int>mpp;
        for(int i = 0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
            {
                bull++;
            }
            else
            {
                mpp[secret[i]]++;
            }
        }
        int cow = 0;
        for(int i = 0;i<secret.size();i++)
        {
            if(secret[i]!=guess[i])
            {
                if(mpp.find(guess[i])!=mpp.end())
                {
                    cow++;
                    mpp[guess[i]]--;
                    if(!mpp[guess[i]])mpp.erase(guess[i]);
                }
            }
        }
        
        string b = to_string(bull) + "A" + to_string(cow) + "B";
        return b;
    }
};
