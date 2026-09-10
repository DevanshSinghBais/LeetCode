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
    string getDirections(TreeNode* root, int s, int d) {
        vector<TreeNode*>v1,v2;
        findPath(root,s,v1);
        findPath(root,d,v2);
        int i = 0,j = 0;
        int m = v1.size(),n = v2.size();
        while(v1[i]==v2[j])
        {
            i++;
            j++;
            if(i==m||j==n)break;
        }
        i--,j--;
        string s1;
        string s2;
        while(i<m-1)
        {
            s1 += 'U';
            i++;
        }
        while(j<n-1)
        {
            if(v2[j]->left==v2[j+1])
            {
                s2 += 'L';
            }
            else
            {
                s2 += 'R';
            }
            j++;
        }
        return s1 + s2;


    }
    void findPath(TreeNode* root, int target, vector<TreeNode*>& path)
    {
    if(root == NULL)
        return;

    path.push_back(root);

    if(root->val == target)
        return;

    findPath(root->left, target, path);

    if(!path.empty() && path.back()->val == target)
        return;

    findPath(root->right, target, path);

    if(!path.empty() && path.back()->val == target)
        return;

    path.pop_back();
    }
};