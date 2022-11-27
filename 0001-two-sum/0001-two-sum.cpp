class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
       map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(m.count(x)){
                v.push_back(m[x]);
                v.push_back(i);
            }
            m[nums[i]]=i;
        }
        return v;
    }
};