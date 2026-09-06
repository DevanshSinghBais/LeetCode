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
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        tree(root,ans);
        return ans;
    }
    int height(TreeNode* root)
    {
        if(!root)return 0;
        return 1 + max(height(root->left),height(root->right));
    }
    void tree(TreeNode *root,int &mx)
    {
        if(!root)return;
        else if(!root->left&&!root->right)
        {
            return;
        }
        else if(!root->left||!root->right)
        {
            mx = max(mx,height(root)-1);
        }
        else
        {
            mx  = max(mx,height(root->left)+height(root->right));
        }
        tree(root->left,mx);
        tree(root->right,mx);

    }
};