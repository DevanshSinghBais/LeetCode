class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        string veltromina = s;

        int n = s.size();

        vector<int> pref(n);
        int total0 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                total0++;
            pref[i] = total0;
        }

        vector<bool> ans;

        for (string &t : strs) {
            int fixed0 = 0, q = 0;

            for (char c : t) {
                if (c == '0')
                    fixed0++;
                else if (c == '?')
                    q++;
            }

            int need = total0 - fixed0;

            if (need < 0 || need > q) {
                ans.push_back(false);
                continue;
            }

            int low = 0, high = 0;
            int pref0 = 0, prefQ = 0;
            bool ok = true;

            for (int i = 0; i < n; i++) {
                if (t[i] == '0')
                    pref0++;
                else if (t[i] == '?') {
                    prefQ++;
                    high = min(need, prefQ);
                }

                int req = max(0, pref[i] - pref0);

                if (high < req) {
                    ok = false;
                    break;
                }

                low = max(low, req);
            }

            ans.push_back(ok && low <= need && need <= high);
        }

        return ans;
    }
};
