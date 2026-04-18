class Solution {
public:
    int solveMemoization(int idx, vector<int>& nums, vector<int>& dp) {
        if (idx == 0)
            return nums[0];
        if (idx < 0)
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int pick = nums[idx] + solveMemoization(idx - 2, nums, dp);
        int not_pick = solveMemoization(idx - 1, nums, dp);

        return dp[idx] = max(pick, not_pick);
    }

    // 🔹 Tabulation (Bottom-Up
    int solveTabulation(int n, vector<int>& nums, vector<int>& dp) {
        dp[0] = nums[0];
        if (n == 1)
            return nums[0];

        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            int pick = nums[i] + dp[i - 2];
            int not_pick = dp[i - 1];

            dp[i] = max(pick, not_pick);
        }

        return dp[n - 1];
    }

    // 🔹 Space Optimize
    int solveSpaceOptimized(int n, vector<int>& nums) {
        if (n == 1)
            return nums[0];

        int prev2 = nums[0];
        int prev1 = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            int curr = max(nums[i] + prev2, prev1);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        // return solveMemoization(n - 1, nums, dp);  // TC: O(n), SC: O(n) +
        // recursion stack
        // return solveTabulation(n, nums, dp);       // TC: O(n), SC: O(n)
        return solveSpaceOptimized(n, nums); // TC: O(n), SC: O(1)
    }
};