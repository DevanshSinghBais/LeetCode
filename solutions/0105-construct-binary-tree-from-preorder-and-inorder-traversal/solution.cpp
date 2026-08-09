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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return Tree(inorder,preorder,0,inorder.size()-1,0);
    }
    TreeNode* Tree(vector<int>&in,vector<int>&pre,int instart,int inend,int index)
    {
        if(instart>inend)return NULL;
        TreeNode* root = new TreeNode(pre[index]);
        int pos = find(in,pre[index],instart,inend);
        root->left = Tree(in,pre,instart,pos-1,index+1);
        root->right = Tree(in,pre,pos+1,inend,index+pos-instart+1);
        return root;
    }
    int find(vector<int>&in,int target,int start,int end)
    {
        for(int i = start;i<=end;i++)
        {
            if(in[i]==target)
            {
                return i;
            }
        }
        return -1;
    }
};
