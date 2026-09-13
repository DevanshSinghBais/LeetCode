class Solution {
public:
    unordered_map<int, int> mp;
    int maxi = 0;

    int dfs(TreeNode* root) {
        if (!root) return 0;

        int left = dfs(root->left);
        int right = dfs(root->right);

        int sum = left + right + root->val;

        mp[sum]++;
        maxi = max(maxi, mp[sum]);

        return sum;
    }

    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);

        vector<int> ans;

        for (auto &it : mp) {
            if (it.second == maxi)
                ans.push_back(it.first);
        }

        return ans;
    }
};