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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return maxtree(nums,0,nums.size()-1);
    }
    TreeNode* maxtree(vector<int>& v, int i, int j)
{
    if (i > j)
        return nullptr;

    int maxi = INT_MIN;
    int pos = -1;

    for (int k = i; k <= j; k++)
    {
        if (v[k] > maxi)
        {
            maxi = v[k];
            pos = k;
        }
    }

    TreeNode* root = new TreeNode(maxi);

    root->left = maxtree(v, i, pos - 1);
    root->right = maxtree(v, pos + 1, j);

    return root;
} 
};
