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
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        minabs(root,ans);
        sort(ans.begin(),ans.end());
        int m = ans.size();
        int mn = INT_MAX;
        for(int i = 1;i<m;i++)
        {
            mn = min(mn,ans[i]-ans[i-1]);
        }
        return mn;
    }
    void minabs(TreeNode* root,vector<int>&ans)
    {
        if(!root)return;
        ans.push_back(root->val);
        minabs(root->left,ans);
        minabs(root->right,ans);
    }
};