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
    TreeNode* bstFromPreorder(vector<int>& pre) {
        int mx = INT_MAX;
        int mn = INT_MIN;
        int ind = 0;
        return bst(pre,ind,mn,mx);
        
    }
    TreeNode* bst(vector<int>&pre,int &ind,int l,int r)
    {
        if(ind==pre.size()||pre[ind]<l||pre[ind]>r)
        {
            return NULL;

        }
        TreeNode* root = new TreeNode(pre[ind++]);
        root->left = bst(pre,ind,l,root->val);
        root->right = bst(pre,ind,root->val,r);
        return root;
        
    }
};