class Solution {
public:
    // int f(int idx,int prev,vector<int>&nums,vector<vector<int>>&dp){
    //     if(idx==nums.size()) return 0;
    //     if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];
    //     int len=0+f(idx+1,prev,nums,dp);
    //     if(prev==-1||nums[idx]>nums[prev]){
    //         len=max(len,1+f(idx+1,idx,nums,dp));
    //     }
    //     return dp[idx][prev+1]= len;
    // }
    int lengthOfLIS(vector<int>& nums) {
        // vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        // return f(0,-1,nums,dp);
        vector<int>temp;
        temp.push_back(nums[0]);
        int len=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>temp.back()){
                temp.push_back(nums[i]);
                len++;
            }else{
                int ind=lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
                temp[ind]=nums[i];
            }
        }
        return len;
    }
};