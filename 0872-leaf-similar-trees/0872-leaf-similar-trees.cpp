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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        leaf(root1,v1);
        leaf(root2,v2);
        if(v1.size()!=v2.size())
        {
            return false;
        }
        int m = v1.size();
        for(int i = 0;i<m;i++)
        {
            if(v1[i]!=v2[i])
            {
                return false;
            }
        }
        return true;
        
    }
    void leaf(TreeNode* root,vector<int>&v)
    {
        if(!root)return;
        if(!root->left&&!root->right)
        {
            v.push_back(root->val);
        }
        leaf(root->left,v);
        leaf(root->right,v);
    }

};