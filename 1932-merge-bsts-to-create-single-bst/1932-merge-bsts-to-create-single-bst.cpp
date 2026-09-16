class Solution {
public:
    TreeNode* canMerge(vector<TreeNode*>& trees) {

        unordered_map<int, TreeNode*> mp;
        unordered_set<int> child;

        for(int i = 0; i < trees.size(); i++) {
            mp[trees[i]->val] = trees[i];

            if(trees[i]->left)
                child.insert(trees[i]->left->val);

            if(trees[i]->right)
                child.insert(trees[i]->right->val);
        }

        TreeNode* root = nullptr;

        for(int i = 0; i < trees.size(); i++) {
            if(!child.count(trees[i]->val)) {
                root = trees[i];
                break;
            }
        }

        if(!root)
            return nullptr;

        mp.erase(root->val);

        if(!merge(root, mp, LLONG_MIN, LLONG_MAX))
            return nullptr;

        if(!mp.empty())
            return nullptr;

        return root;
    }

    bool merge(TreeNode* root,
               unordered_map<int, TreeNode*>& mp,
               long long low,
               long long high) {

        if(!root)
            return true;

        if(root->val <= low || root->val >= high)
            return false;

        
        if(!root->left && !root->right && mp.count(root->val)) {

            TreeNode* temp = mp[root->val];

            root->left = temp->left;
            root->right = temp->right;

            mp.erase(root->val);
        }

        return merge(root->left, mp, low, root->val) &&
               merge(root->right, mp, root->val, high);
    }
};