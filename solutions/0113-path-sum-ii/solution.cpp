class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(root, targetSum, temp, ans);

        return ans;
    }

    void solve(TreeNode* root, int targetSum,
               vector<int>& temp,
               vector<vector<int>>& ans) {

        if (!root)
            return;

        
        temp.push_back(root->val);

        
        if (!root->left && !root->right) {

            if (root->val == targetSum) {
                ans.push_back(temp);
            }

            
            temp.pop_back();
            return;
        }

        
        solve(root->left, targetSum - root->val, temp, ans);
        solve(root->right, targetSum - root->val, temp, ans);

        
        temp.pop_back();
    }
};
