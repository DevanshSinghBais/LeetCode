class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;

        if (!root)
            return ans;

        travel(root, ans);

        reverse(ans.begin(), ans.end());

        return ans;
    }

    void travel(TreeNode* root, vector<vector<int>>& ans)
    {
        queue<TreeNode*> q;
        q.push(root);

        int s1 = 1, s2 = 0;

        while (s1 || s2)
        {
            vector<int> temp;

            while (s1 > 0)
            {
                s1--;

                TreeNode* temp1 = q.front();
                q.pop();

                temp.push_back(temp1->val);

                if (temp1->left)
                {
                    q.push(temp1->left);
                    s2++;
                }

                if (temp1->right)
                {
                    q.push(temp1->right);
                    s2++;
                }
            }

            if (!temp.empty())
                ans.push_back(temp);

            vector<int> temp2;

            while (s2 > 0)
            {
                s2--;

                TreeNode* temp1 = q.front();
                q.pop();

                temp2.push_back(temp1->val);

                if (temp1->left)
                {
                    q.push(temp1->left);
                    s1++;
                }

                if (temp1->right)
                {
                    q.push(temp1->right);
                    s1++;
                }
            }

            if (!temp2.empty())
                ans.push_back(temp2);
        }
    }
};
