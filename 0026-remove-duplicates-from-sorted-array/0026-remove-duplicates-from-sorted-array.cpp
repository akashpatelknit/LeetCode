class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int i = 0;

        for (auto m : mp) {
            nums[i++] = m.first;
        }

        return i;
    }
};