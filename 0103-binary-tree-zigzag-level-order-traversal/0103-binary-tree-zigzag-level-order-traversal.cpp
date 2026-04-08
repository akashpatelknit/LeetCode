class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            vector<int> level;
            int size = q.size();
            bool isLeftToRight = ans.size() % 2 ? false : true;
            for (int i = 0; i < size; i++) {
                TreeNode* root = q.front();
                q.pop();
                if (isLeftToRight) {
                    level.push_back(root->val);
                } else {
                    level.insert(level.begin(), root->val);
                }

                if (root->left != NULL) {
                    q.push(root->left);
                }
                if (root->right != NULL) {
                    q.push(root->right);
                }
            }
            ans.push_back(level);
        }

        return ans;
    }
};