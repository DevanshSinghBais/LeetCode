class Solution {
public:
    vector<int> largestValues(TreeNode* root) {

        vector<int> ans;

        if (!root)
            return ans;

        queue<TreeNode*> q1, q2;
        q1.push(root);

        while (!q1.empty() || !q2.empty()) {

            
            if (!q1.empty()) {

                int mx = INT_MIN;

                while (!q1.empty()) {
                    TreeNode* temp = q1.front();
                    q1.pop();

                    mx = max(mx, temp->val);

                    if (temp->left)
                        q2.push(temp->left);

                    if (temp->right)
                        q2.push(temp->right);
                }

                ans.push_back(mx);
            }

            
            if (!q2.empty()) {

                int mx = INT_MIN;

                while (!q2.empty()) {
                    TreeNode* temp = q2.front();
                    q2.pop();

                    mx = max(mx, temp->val);

                    if (temp->left)
                        q1.push(temp->left);

                    if (temp->right)
                        q1.push(temp->right);
                }

                ans.push_back(mx);
            }
        }

        return ans;
    }
};
