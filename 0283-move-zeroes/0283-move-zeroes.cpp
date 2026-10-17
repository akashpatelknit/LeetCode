class Solution {
    public:
    void moveZeroes(vector<int>& nums) {
        int insertIndex = 0;

        for (int readIndex = 0; readIndex < nums.size(); readIndex++) {
            if (nums[readIndex] != 0) {
                if (readIndex != insertIndex) {
                    swap(nums[readIndex], nums[insertIndex]);
                }

                insertIndex++;
            }
        }
    }
};