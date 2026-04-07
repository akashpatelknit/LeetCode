class Solution {
public:
    void solve(TreeNode* root, string s, vector<string>& ans) {
        if (root == NULL)
            return;

        if (s.length() == 0) {
            s += to_string(root->val);
        } else {
            s = s + "->" + to_string(root->val);
        }

        if (root->left == NULL && root->right == NULL) {
            ans.push_back(s);
            return;
        }

        solve(root->left, s, ans);
        solve(root->right, s, ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        solve(root, "", ans);
        return ans;
    }
};