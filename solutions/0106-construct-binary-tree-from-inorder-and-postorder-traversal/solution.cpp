class Solution {
public:

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        if (inorder.empty())
            return nullptr;

        int rootVal = postorder.back();

        TreeNode* root = new TreeNode(rootVal);

        int pos = 0;

        while (inorder[pos] != rootVal)
            pos++;

        vector<int> leftInorder(inorder.begin(), inorder.begin() + pos);
        vector<int> rightInorder(inorder.begin() + pos + 1, inorder.end());

        vector<int> leftPostorder(postorder.begin(),
                                   postorder.begin() + pos);

        vector<int> rightPostorder(postorder.begin() + pos,
                                    postorder.end() - 1);

        root->left = buildTree(leftInorder, leftPostorder);
        root->right = buildTree(rightInorder, rightPostorder);

        return root;
    }
};
