class Solution {
public:
    vector<string> letterCombinations(string digits) {

        if(digits.empty()) return {};

        vector<string> keys = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> v;
        string c;
        int m = digits.size();

        keypad(v, keys, c, digits, 0, m);

        return v;
    }

    void keypad(vector<string>& v,
                vector<string>& keys,
                string& c,
                string& digits,
                int i,
                int m)
    {
        if(i == m)
        {
            v.push_back(c);
            return;
        }

        int number = digits[i] - '0';

        for(int k = 0; k < keys[number].size(); k++)
        {
            c += keys[number][k];
            keypad(v, keys, c, digits, i + 1, m);
            c.pop_back();
        }
    }
};
