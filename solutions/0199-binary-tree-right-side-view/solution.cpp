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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        vector<vector<int>>v;
        rightview(root,v);
        for(int i = 0;i<v.size();i++)
        {
            ans.push_back(v[i][v[i].size()-1]);
        }
        return ans;
    }
    void rightview(TreeNode* root,vector<vector<int>>&v)
    {
        if(!root)return ;

        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        q1.push(root);
        
        
        while(!q1.empty()||!q2.empty())
        {
            vector<int>temp1;
            while(!q1.empty())
            {
                TreeNode* t = q1.front();
                q1.pop();
                temp1.push_back(t->val);
                if(t->left)
                {
                    q2.push(t->left);
                }
                if(t->right)
                {
                    q2.push(t->right);
                }

            }
            if (!temp1.empty())
                v.push_back(temp1);
            vector<int>temp2;
            while(!q2.empty())
            {
                TreeNode* s = q2.front();
                q2.pop();
                temp2.push_back(s->val);
                if(s->left)
                {
                    q1.push(s->left);
                }
                if(s->right)
                {
                    q1.push(s->right);
                }

            }
            if (!temp2.empty())
                v.push_back(temp2);



        }
    }
};
