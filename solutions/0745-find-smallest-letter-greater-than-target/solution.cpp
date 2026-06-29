class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char c = '}';
        for(int i = 0;i<letters.size();i++)
        {
            if(letters[i]>target)
            {
                c = min(c,letters[i]);
            }
        }
        if(c=='}')return letters[0];

        return c;
    }
};
