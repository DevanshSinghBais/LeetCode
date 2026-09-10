class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root,
                                   TreeNode* p,
                                   TreeNode* q) {

        vector<TreeNode*> v1, v2;

        findPath(root, p, v1);
        findPath(root, q, v2);

        int m = v1.size();
        int n = v2.size();

        int i = 0;

        TreeNode* head = nullptr;

        while(i < m && i < n && v1[i] == v2[i])
        {
            head = v1[i];
            i++;
        }

        return head;
    }

    void findPath(TreeNode* root,
                  TreeNode* target,
                  vector<TreeNode*>& path)
    {
        if(root == NULL)
            return;

        path.push_back(root);

        if(root == target)
            return;

        findPath(root->left, target, path);

        if(!path.empty() && path.back() == target)
            return;

        findPath(root->right, target, path);

        if(!path.empty() && path.back() == target)
            return;

        path.pop_back();
    }
};