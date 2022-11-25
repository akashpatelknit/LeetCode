class Solution {
public:
       int f(int idx,int t,vector<int>&a,vector<vector<int>>&dp){
    if(idx==0){
        if(t%a[0]==0) return 1;
        else return 0;
    }
    if(dp[idx][t]!=-1) return dp[idx][t];
    int nt=f(idx-1,t,a,dp);
    int take=0;
    if(a[idx]<=t) take=f(idx,t-a[idx],a,dp);
    return dp[idx][t]= nt+take;
}
    int change(int x, vector<int>& num) {
    int n=num.size();
    vector<vector<int>>dp(n,vector<int>(x+1,-1));
   int ans= f(n-1,x,num,dp);
  
   return ans;
    }
};