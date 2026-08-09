class Solution {
public:

    void flatten(TreeNode* root) {
        if (!root) return;

        TreeNode* dummy = new TreeNode(0);
        TreeNode* pre = dummy;
        TreeNode* curr = root;

        solve(curr, pre);

        
    }

    void solve(TreeNode*& curr, TreeNode*& pre) {

        if (!curr)
            return;

        TreeNode* left = curr->left;
        TreeNode* right = curr->right;

        pre->right = curr;
        curr->left = nullptr;

        pre = curr;

        curr = left;
        solve(curr, pre);

        curr = right;
        solve(curr, pre);
    }
};
