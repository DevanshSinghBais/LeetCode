class Solution {
public:
    int ans = 0;

    int dfs(TreeNode* root) {
        if (root == nullptr)
            return INT_MIN;

        int leftMax = dfs(root->left);
        int rightMax = dfs(root->right);

        int mx = max(root->val, max(leftMax, rightMax));

        if (root->val == mx)
            ans++;

        return mx;
    }

    int countDominantNodes(TreeNode* root) {
        TreeNode* norlavetic = root;

        dfs(norlavetic);

        return ans;
    }
};
