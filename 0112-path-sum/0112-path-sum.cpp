class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL)
            return false;

        // reached a leaf, check if remaining sum matches
        if (root->left == NULL && root->right == NULL)
            return root->val == targetSum;

        // subtract current node and recurse both sides
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};