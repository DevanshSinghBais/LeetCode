/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        prune(root);
        if(!root->left&&!root->right&&!root->val)return NULL;
        return root;
    }
    void prune(TreeNode* root)
    {
        if(!root)return;
        int s1 = 0,s2 = 0;
        check(root->left,s1);
        check(root->right,s2);
        if(!s1)root->left = NULL;
        if(!s2)root->right = NULL;
        prune(root->left);
        prune(root->right);
    }
    void check(TreeNode* root,int &s)
    {
        if(!root)return;
        s += root->val;
        check(root->left,s);
        check(root->right,s);
    }
};