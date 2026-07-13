class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,int> map;
        unordered_map<int,int> map2;
        for (int i = 0; i < s.size(); i++) {
            if (map[s[i]] != map2[t[i]]) {
                return false;
            }
            map[s[i]] = i + 1;
            map2[t[i]] = i + 1;
        }
        return true;
    }
};
