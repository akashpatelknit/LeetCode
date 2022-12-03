/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   TreeNode* fun(TreeNode* root,int target){
       if(root==NULL) return NULL;
       if(root->val==target && root->left==NULL && root->right==NULL) return NULL;
       root->left=fun(root->left,target);
       root->right=fun(root->right,target);
       if(root->val==target && root->left==NULL && root->right==NULL) return NULL;
       return root;
   }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        
        return fun( root, target);
    }
};