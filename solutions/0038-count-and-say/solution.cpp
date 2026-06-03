class Solution {
public:
    string countAndSay(int n) {
        ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
        string s = "1";
        while (--n) {
            for (int i = 0; i < s.length(); i++) {
                int cnt = 0;
                char c = s[i];
                int k = i;

                while (k < s.length() && s[k] == c) {
                    cnt++;
                    k++;
                }

                k = k - 1;
                int l = i;
                int r = k;

                s.replace(l, r - l + 1, to_string(cnt) + c);
                i = (to_string(cnt) + c).length()+i-1;
            }
        }
        return s;
    }
};
