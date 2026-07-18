class Solution {
public:
    bool isVowel[256] = {};

    Solution() {
        isVowel['a'] = isVowel['e'] = isVowel['i'] = isVowel['o'] = isVowel['u'] = true;
        isVowel['A'] = isVowel['E'] = isVowel['I'] = isVowel['O'] = isVowel['U'] = true;
    }

    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;

        while (i < j) {
            while (i < j && !isVowel[s[i]]) i++;
            while (i < j && !isVowel[s[j]]) j--;

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};
