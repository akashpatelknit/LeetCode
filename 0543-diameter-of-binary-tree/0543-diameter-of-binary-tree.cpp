class Solution {
public:
     int maxDepth(TreeNode* root,int &maxi) {
        if(root==NULL) return 0;
        int l=maxDepth(root->left,maxi);
        int r=maxDepth(root->right,maxi);
        maxi=max(l+r,maxi);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
       maxDepth(root,maxi);
        return maxi;
    }
};