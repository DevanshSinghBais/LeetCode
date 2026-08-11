class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        int l = 0, r = 0;
        find(root, 0, l, r);

        vector<vector<pair<int,int>>> v(r - l + 1);

        
        queue<pair<TreeNode*, pair<int,int>>> q;

        
        q.push({root, {0, -l}});

        while(!q.empty()) {
            
            auto temp = q.front();
            q.pop();

            TreeNode* node = temp.first;
            int row = temp.second.first;
            int col = temp.second.second;

            v[col].push_back({row, node->val});

            if(node->left) {
                q.push({node->left, {row + 1, col - 1}});
            }

            if(node->right) {
                q.push({node->right, {row + 1, col + 1}});
            }
        }

        vector<vector<int>> ans;

        for(auto &col : v) {
            
            
            sort(col.begin(), col.end());

            vector<int> temp;

            for(auto x : col) {
                temp.push_back(x.second);
            }

            ans.push_back(temp);
        }

        return ans;
    }

    void find(TreeNode* root, int pos, int &l, int &r) {
        
        if(!root)
            return;

        l = min(l, pos);
        r = max(r, pos);

        find(root->left, pos - 1, l, r);
        find(root->right, pos + 1, l, r);
    }
};
