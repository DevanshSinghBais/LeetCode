class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> p;

        for (string &s : strs) {
            p.push_back(s);
            sort(s.begin(), s.end());
        }

        vector<pair<string, int>> v;

        for (int i = 0; i < strs.size(); i++) {
            v.push_back({strs[i], i});
        }

        sort(v.begin(), v.end());

        ans.push_back({});
        int q = 0;

        for (int i = 0; i < v.size(); i++) {
            if (i == 0) {
                ans[q].push_back(p[v[i].second]);
            }
            else {
                if (v[i].first == v[i - 1].first) {
                    ans[q].push_back(p[v[i].second]);
                }
                else {
                    q++;
                    ans.push_back({});
                    ans[q].push_back(p[v[i].second]);
                }
            }
        }

        return ans;
    }
};