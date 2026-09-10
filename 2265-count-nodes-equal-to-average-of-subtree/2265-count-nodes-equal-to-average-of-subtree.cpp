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
    int averageOfSubtree(TreeNode* root) {
        int cnt = 0;
        avg(root,cnt);
        return cnt;
    }
    void avg(TreeNode *root,int &cnt)
    {
        if(!root)return;
        int s = 0,p = 0;
        sum(root,s,p);
        int avg1 = round(s/p);
        if(root->val==avg1)cnt++;
        avg(root->left,cnt);
        avg(root->right,cnt);
    }
    void sum(TreeNode* root,int &s,int &p)
    {
        if(!root)return;
        s += root->val;
        p++;
        sum(root->left,s,p);
        sum(root->right,s,p);
    }
};