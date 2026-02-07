class Solution {
public:
    int maximumSwap(int num) {
        vector<int> v;
        int a = num;
        while (a > 0) {
            v.insert(v.begin(), a % 10);
            a = a / 10;
        }

        vector<int> v1(v);
        sort(v1.begin(), v1.end(), greater<int>());

        int i = 0, j = 0;
        while (i < v.size()) {
            if (v[i] == v1[j]) {
                i++;
                j++;
            } else {
                auto it = find(v.rbegin(), v.rend(), v1[j]);
int index = v.size() - 1 - (it - v.rbegin());

                swap(v[i], v[index]);
                break;
            }
        }

        int ans = 0;
        
        for (int i = 0; i < v.size(); i++) {
            ans = ans * 10 + v[i];
           
        }
        return ans;
    }
};

