class Solution {
public:
    long long f(int i,int oe,vector<int>&nums,vector<vector<long long>>&dp){
        if(i==nums.size()) return 0;
        
        if(dp[i][oe]!=-1) return dp[i][oe];
        int temp=0;
        if(oe==1) temp=nums[i];
        else temp=-nums[i];
        long long nt=f(i+1,oe,nums,dp);
        long long take=temp+f(i+1,!oe,nums,dp);
        return dp[i][oe]= max(nt,take);
    }
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<long long>>dp(n,vector<long long>(2,-1));
        return f(0,1,nums,dp);
    }
};