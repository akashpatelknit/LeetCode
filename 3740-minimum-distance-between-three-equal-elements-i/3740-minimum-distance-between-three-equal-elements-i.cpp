class Solution {
public:
    // int minimumDistance(vector<int>& nums) {
    //     int ans = INT_MAX;
    //     int n = nums.size();
    //     for (int i = 0; i < n; i++) {
    //         for (int j = i + 1; j < n; j++) {
    //             for (int k = j + 1; k < n; k++) {
    //                 if (nums[i] == nums[j] && nums[j] == nums[k]) {
    //                     ans = min(ans, abs(i - j) + abs(j - k) + abs(k - i));
    //                 }
    //             }
    //         }
    //     }
    //     return ans == INT_MAX ? -1 : ans;
    // }
    int minimumDistance(vector<int>& nums) {
        int ans = INT_MAX;
        map<int, vector<int>> mp; // value → last 3 indices seen

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);

            if (mp[nums[i]].size() >= 3) {
                auto& v = mp[nums[i]];
                // always take last 3 → smallest span guaranteed
                int dist = 2 * (v.back() - v[v.size() - 3]);
                ans = min(ans, dist);
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};