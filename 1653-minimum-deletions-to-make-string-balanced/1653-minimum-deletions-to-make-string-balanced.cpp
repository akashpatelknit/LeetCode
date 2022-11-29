class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        vector<vector<int>>dp(2,vector<int>(n+1,0));
        for(int i=0;i<n;i++){
            dp[0][i+1]=dp[0][i]+(s[i]=='a');
            dp[1][i+1]=dp[1][i]+(s[i]=='b');
        }
        int ans=s.size();
        for(int i=0;i<=n;i++){
            int l=dp[1][i];
            int r=dp[0][n]-dp[0][i];
            ans=min(ans,l+r);
        }
        return ans;
    }
};