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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q1,q2;
        q1.push(root);
        int mx = INT_MIN;
        int level = 1;
        int ans = 0;
        while(!q1.empty()||!q2.empty())
        {
            if(!q1.empty())
            {
                long long sum = 0;
                while(!q1.empty())
                {
                    TreeNode* temp = q1.front();
                    q1.pop();
                    sum += temp->val;
                    if(temp->left)
                    {
                        q2.push(temp->left);
                    }
                    if(temp->right)
                    {
                        q2.push(temp->right);
                    }

                }
                if(sum>mx)
                {
                    mx = sum;
                    ans = level;
                }
                level++;
            }
            if(!q2.empty())
            {
                long long sum = 0;
                while(!q2.empty())
                {
                    TreeNode* temp = q2.front();
                    q2.pop();
                    sum += temp->val;
                    if(temp->left)
                    {
                        q1.push(temp->left);
                    }
                    if(temp->right)
                    {
                        q1.push(temp->right);
                    }

                }
                if(sum>mx)
                {
                    mx = sum;
                    ans = level;
                }
                level++;
            }
        }
        return ans;

    }
};
