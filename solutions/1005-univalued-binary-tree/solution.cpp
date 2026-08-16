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
    bool isUnivalTree(TreeNode* root) {
        set<int>s;
        uni(root,s);
        if(s.size()==1)return true;

        return false;
    }
    void uni(TreeNode* root,set<int>&s)
    {
        if(!root)return;

        s.insert(root->val);
        uni(root->left,s);
        uni(root->right,s);
    }
};
