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
    
    int kthSmallest(TreeNode* root, int k) {
       vector<int>v;
       bst(root,v);
       sort(v.begin(),v.end());
       return v[k-1]; 
    }
    void bst(TreeNode* temp,vector<int>&v)
    {
        if(!temp)
        {
            return ;
        }
        v.push_back(temp->val);
        bst(temp->left,v);
        bst(temp->right,v);
    }
};
