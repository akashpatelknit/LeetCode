class Solution {
public:
    int f(int idx,int t,vector<int>&a,vector<vector<int>>&dp){
    if(idx==0){
        if(t%a[0]==0) return t/a[0];
        else return 1e9;
    }
    if(dp[idx][t]!=-1) return dp[idx][t];
    int nt=f(idx-1,t,a,dp);
    int take=INT_MAX;
    if(a[idx]<=t) take=1+f(idx,t-a[idx],a,dp);
    return dp[idx][t]= min(nt,take);
}
    int coinChange(vector<int>& num, int x) {
      int n=num.size();
    vector<vector<int>>dp(n,vector<int>(x+1,-1));
   int ans= f(n-1,x,num,dp);
    if(ans>=1e9)  return -1;
    else return ans;
    }
};