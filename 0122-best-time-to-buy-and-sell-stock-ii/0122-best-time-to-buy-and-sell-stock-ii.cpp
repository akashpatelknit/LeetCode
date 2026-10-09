class Solution {
public:
    int solve (int i,int buyy,vector<int>&prices){
        if(i>=prices.size()) return 0;
        if(buyy){
           int buy=-1*prices[i]+solve(i+1,0,prices);
           int notbuy=solve(i+1,1,prices);
           return max(buy,notbuy);
        }else{
           int  sell=prices[i]+solve(i+1,1,prices);
           int  notsell=solve(i+1,0,prices);
           return max(sell,notsell);
        }   
    }
    int solveMemo (int i,int buyy,vector<int>&prices,vector<vector<int>>&dp){
        if(i>=prices.size()) return 0;
        if(dp[i][buyy]!=-1) return dp[i][buyy];
        if(buyy){
           int buy=-1*prices[i]+solveMemo(i+1,0,prices,dp);
           int notbuy=solveMemo(i+1,1,prices,dp);
           return dp[i][buyy]=max(buy,notbuy);
        }else{
           int  sell=prices[i]+solveMemo(i+1,1,prices,dp);
           int  notsell=solveMemo(i+1,0,prices,dp);
           return dp[i][buyy]=max(sell,notsell);
        }   
    }
    int solveTab (vector<int>&prices){
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        dp[n][0]=dp[n][1]=0;
        cout<<"cheack";
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                if(buy==0){
                    int buyy=-1*prices[i]+dp[i+1][1];
                    int notbuy=dp[i+1][0];
                    dp[i][buy]=max(buyy,notbuy);
                }else{
                    int sell=prices[i]+dp[i+1][0];
                    int notsell=dp[i+1][1];
                    dp[i][buy]=max(sell,notsell);
                }   
            }
        }
        return dp[0][0];
    }
    int solveSpace (vector<int>&prices){
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        dp[n][0]=dp[n][1]=0;
        cout<<"cheack";
        for(int i=n-1;i>=0;i--){
            for(int buy=0;buy<=1;buy++){
                if(buy==0){
                    int buyy=-1*prices[i]+dp[i+1][1];
                    int notbuy=dp[i+1][0];
                    dp[i][buy]=max(buyy,notbuy);
                }else{
                    int sell=prices[i]+dp[i+1][0];
                    int notsell=dp[i+1][1];
                    dp[i][buy]=max(sell,notsell);
                }   
            }
        }
        return dp[0][0];
    }

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        // return solveMemo(0,1,prices,dp);
        return solveTab(prices);
    }
};