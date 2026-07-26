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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (!root)
            return ans;

        stack<TreeNode*> s1, s2;
        s1.push(root);

        while (!s1.empty() || !s2.empty()) {

            if (!s1.empty()) {
                vector<int> v;
                int n = s1.size();

                while (n--) {
                    TreeNode* temp = s1.top();
                    s1.pop();

                    v.push_back(temp->val);

                    if (temp->left)
                        s2.push(temp->left);
                    if (temp->right)
                        s2.push(temp->right);
                }

                ans.push_back(v);
            }

            if (!s2.empty()) {
                vector<int> v;
                int n = s2.size();

                while (n--) {
                    TreeNode* temp = s2.top();
                    s2.pop();

                    v.push_back(temp->val);

                    if (temp->right)
                        s1.push(temp->right);
                    if (temp->left)
                        s1.push(temp->left);
                }

                ans.push_back(v);
            }
        }

        return ans;
    }
};
