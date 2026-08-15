class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        path(root, v, "");
        return v;
    }

    void path(TreeNode* root, vector<string>& v, string s) {
        if (!root) return;

        s += to_string(root->val);

        if (!root->left && !root->right) {
            v.push_back(s);
            return;
        }

        s += "->";

        path(root->left, v, s);
        path(root->right, v, s);
    }
};
