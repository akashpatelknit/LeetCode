class Solution {
public:
    int f(int a,int b,vector<int>& nums1, vector<int>& nums2, vector<vector<int>>&dp){
        if(a==nums1.size() || b==nums2.size()) return 0;
        if(dp[a][b]!=-1) return dp[a][b];
        if(nums1[a]==nums2[b]){
            return dp[a][b]=1+f(a+1,b+1,nums1,nums2,dp);
        }else{
            return dp[a][b]=max(f(a,b+1,nums1,nums2,dp),f(a+1,b,nums1,nums2,dp));
        }
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(),-1));
        return f(0,0,nums1,nums2,dp);
    }
};