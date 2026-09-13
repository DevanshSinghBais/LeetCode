class Codec {
public:

    void solve(TreeNode* root, string& s) {
        if (root == nullptr) {
            s += "# ";
            return;
        }

        s += to_string(root->val) + " ";

        solve(root->left, s);
        solve(root->right, s);
    }

    string serialize(TreeNode* root) {
        string s;
        solve(root, s);
        return s;
    }

    TreeNode* build(stringstream& ss) {
        string x;
        ss >> x;

        if (x == "#")
            return nullptr;

        TreeNode* root = new TreeNode(stoi(x));

        root->left = build(ss);
        root->right = build(ss);

        return root;
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return build(ss);
    }
};