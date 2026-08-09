class Solution {
public:
    int ans = 0;

    int sumNumbers(TreeNode* root) {
        travel(root, 0);
        return ans;
    }

    void travel(TreeNode* root, int num) {
        if (!root)
            return;

        num = num * 10 + root->val;

        if (!root->left && !root->right) {
            ans += num;
            return;
        }

        travel(root->left, num);
        travel(root->right, num);
    }
};
