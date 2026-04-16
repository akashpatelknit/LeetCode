class Solution {
public:
    int solveM(int n, vector<int>& dp) {
        if (n == 0)
            return 1;

        if (n == 1)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = solveM(n - 1, dp) + solveM(n - 2, dp);
    }
    int solveT(int n, vector<int>& dp) {
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return 0;
    }
    int solveTSpace(int n) {
        int prev = 1;
        int prev2 = 1;
        int curr = 0;
        for (int i = 2; i <= n; i++) {
            curr = prev2 + prev;
            prev = prev2;
            prev2 = curr;
        }

        return curr;
    }
    int climbStairs(int n) {
        if (n == 1)
            return 1;
        // vector<int> dp(n + 1, -1);
        // solveT(n, dp);
        // return dp[n];

        return solveTSpace(n);
    }
};