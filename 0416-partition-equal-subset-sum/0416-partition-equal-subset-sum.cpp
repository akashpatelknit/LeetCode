class Solution {
public:
    bool solve(int ind, int sum, vector<int>& nums,vector<vector<int>>& dp) {
        if (sum == 0)
            return true;
        if (ind == 0)
            return nums[0] == sum;

        if(dp[ind][sum]!=-1) return dp[ind][sum];

        bool nottake = solve(ind - 1, sum, nums, dp);
        bool take = false;
        if (sum >= nums[ind]) {
            take = solve(ind - 1, sum - nums[ind], nums, dp);
        }

        return dp[ind][sum] = take || nottake;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;

        for (auto e : nums)
            sum += e;

        if (sum % 2 == 1)
            return false;
        int k = sum / 2;
        vector<vector<int>>dp(nums.size(), vector<int>(k+1, -1));
        return solve(nums.size() - 1, k, nums,dp);
    }
};