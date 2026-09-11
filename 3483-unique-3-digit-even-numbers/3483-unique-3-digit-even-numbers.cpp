class Solution {
public:
    int totalNumbers(vector<int>& dig) {
        int f[10] = {};
        for (int x : dig) f[x]++;

        int ans = 0;

        for (int i = 1; i <= 9; i++) {
            if (!f[i]) continue;
            f[i]--;

            for (int j = 0; j <= 9; j++) {
                if (!f[j]) continue;
                f[j]--;

                for (int k = 0; k <= 8; k += 2) {
                    if (f[k]) ans++;
                }

                f[j]++;
            }

            f[i]++;
        }

        return ans;
    }
};