class Solution {
public:
    bool f(int i,int tar,vector<int>&nums,vector<vector<int>>&dp){
        if(i==0) return tar==nums[0];
        if(tar==0) return true;
        if(dp[i][tar]!=-1) return dp[i][tar];
        bool not_take=f(i-1,tar,nums,dp);
        bool take=false;
        if(nums[i]<=tar) take=f(i-1,tar-nums[i],nums,dp);
        return dp[i][tar]=take|not_take;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
       
        for(auto i:nums) sum+=i;
         vector<vector<int>>dp(n,vector<int>((sum)+1,-1));
        if(sum%2==1) return false;
        return f(nums.size()-1,sum/2,nums,dp);
    }
};