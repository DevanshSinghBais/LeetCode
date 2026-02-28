class Solution {
public:
    string mergeCharacters(string s, int k) {
        map<char,int> mpp;

        for(int i = 0; i < s.length(); i++) {

            if(mpp.count(s[i])) {

                if(i + 1 - mpp[s[i]] > k) {
                    mpp[s[i]] = i + 1;
                } 
                else {
                    s.erase(i, 1);
                    i--;    
                }

            } 
            else {
                mpp[s[i]] = i + 1;
            }
        }

        return s;
    }
};
