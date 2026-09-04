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
    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        pathsum(root,sum);
        return sum;
    }
    int pathsum(TreeNode* root,int &sum)
    {
        if(!root)return 0;
        
        int left = pathsum(root->left,sum);
        int right = pathsum(root->right,sum);
        left = max(0,left);
        right = max(0,right);
        sum = max(sum, root->val + left + right);
        return root->val + max(left,right);


        
    }
};