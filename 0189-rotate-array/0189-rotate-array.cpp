class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp;
        k=k%nums.size();
        int n =nums.size();
        for(int i = n-k; i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++) temp.push_back(nums[i]);
        for(int i=0;i<n;i++) nums[i]=temp[i];
    }
};