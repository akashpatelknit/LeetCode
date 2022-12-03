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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        long long pre=INT_MIN;
        // int level=1;
        int ans=0;
        while(!q.empty()){
            int t=q.size();
            long long curr=0;
            level++;
            for(int i=0;i<t;i++){
                TreeNode* node=q.front();
                 q.pop();
                if(node->left) q.push(node->left);
                 if(node->right) q.push(node->right);
                curr+=node->val;
            }
            if(curr>pre){
                ans=max(ans,level);
                pre=curr;
            }
            
        }
        return ans;
    }
};