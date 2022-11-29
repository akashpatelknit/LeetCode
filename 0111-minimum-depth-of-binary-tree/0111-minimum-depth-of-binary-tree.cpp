class Solution {
public:
    void mind(TreeNode* root,int cnt,int &ans){
        if(root==NULL) return ;
        cnt++;
        if(root->left==NULL && root->right==NULL){
            ans=min(cnt,ans);
            cnt=0;
        }
        mind(root->left,cnt,ans);
        mind(root->right,cnt,ans);
    }
    int minDepth(TreeNode* root) {
        int ans=1e9;
         mind(root,0,ans);
        return root==NULL?0:ans;
    }
};