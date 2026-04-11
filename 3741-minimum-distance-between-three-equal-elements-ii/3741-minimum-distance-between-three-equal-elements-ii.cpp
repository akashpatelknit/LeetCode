class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        map<int, vector<int>> mp;
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);

            if (mp[nums[i]].size() >= 3) {
                auto& v = mp[nums[i]];
                ans = min(ans, 2 * (v.back() - v[v.size() - 3]));
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};