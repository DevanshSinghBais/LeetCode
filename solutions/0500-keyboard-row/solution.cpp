class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;

        string first = "qwertyuiop";
        string second = "asdfghjkl";
        string third = "zxcvbnm";

        for (int i = 0; i < words.size(); i++) {
            int count1 = 0, count2 = 0, count3 = 0;

            for (int j = 0; j < words[i].size(); j++) {
                char c = tolower(words[i][j]);

                if (first.find(c) != string::npos) count1++;
                else if (second.find(c) != string::npos) count2++;
                else if (third.find(c) != string::npos) count3++;
            }

            // word must belong to ONLY one row
            if (count1 == words[i].size() ||
                count2 == words[i].size() ||
                count3 == words[i].size()) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};

