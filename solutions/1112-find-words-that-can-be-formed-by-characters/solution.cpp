class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        int freq[26] = {0};
        for (char c : chars) {
            freq[c - 'a']++;
        }

        int sum = 0;

        for (string &word : words) {
            int temp[26];
            memcpy(temp, freq, sizeof(freq));

            bool ok = true;
            for (char c : word) {
                if (temp[c - 'a'] > 0)
                    temp[c - 'a']--;
                else {
                    ok = false;
                    break;
                }
            }

            if (ok)
                sum += word.size();
        }

        return sum;
    }
};

