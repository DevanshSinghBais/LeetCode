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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q1,q2;
        q1.push(root);
        vector<int>v1;
        int ans;
        bool inside = false;
        while(!q1.empty()||!q2.empty())
        {
            if(!q1.empty())
            {
                vector<int>v2;
                while(!q1.empty())
                {
                    TreeNode* temp = q1.front();
                    q1.pop();
                    if(temp->left)
                    {
                        q2.push(temp->left);
                    }
                    if(temp->right)
                    {
                        q2.push(temp->right);
                    }
                    v2.push_back(temp->val);

                }
                v1.clear();
                v1 = v2;


            }
            if(!q2.empty())
            {
                vector<int>v3;
                while(!q2.empty())
                {
                    TreeNode* temp = q2.front();
                    q2.pop();
                    if(temp->left)
                    {
                        q1.push(temp->left);
                    }
                    if(temp->right)
                    {
                        q1.push(temp->right);
                    }
                    v3.push_back(temp->val);

                }
                v1.clear();
                v1 = v3;
            }
            else
            {
                inside = true;
                ans = v1[0];
            }
        }
        if(!inside)
        {
            ans = v1[0];
        }
        return ans;
    }
};