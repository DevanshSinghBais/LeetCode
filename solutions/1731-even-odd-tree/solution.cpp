class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        
        queue<TreeNode*> q1, q2;
        q1.push(root);

        bool evenLevel = true;

        while (!q1.empty()) {

            vector<int> temp;

            
            while (!q1.empty()) {
                TreeNode* node = q1.front();
                q1.pop();

                temp.push_back(node->val);

                if (node->left)
                    q2.push(node->left);

                if (node->right)
                    q2.push(node->right);
            }

            
            if (evenLevel) {
                
                for (int i = 0; i < temp.size(); i++) {

                    if (temp[i] % 2 == 0)
                        return false;

                    if (i > 0 && temp[i] <= temp[i - 1])
                        return false;
                }
            }
            else {
                
                for (int i = 0; i < temp.size(); i++) {

                    if (temp[i] % 2 != 0)
                        return false;

                    if (i > 0 && temp[i] >= temp[i - 1])
                        return false;
                }
            }

            
            swap(q1, q2);

            evenLevel = !evenLevel;
        }

        return true;
    }
};
