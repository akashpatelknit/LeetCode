class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int d) {
        int ts=0;for(auto i:nums) ts+=i;
        int n=nums.size();
        if(ts-d<0 || (ts-d)%2==1) return 0;
        int tar=(ts-d)/2;
        // vector<vector<int>>dp(n,vector<int>(tar+1,0)
         vector<int>pre(tar+1,0),curr(tar+1,0);
        if(nums[0]==0){
            pre[0]=2;
        }else pre[0]=1;
        if(nums[0]!=0 && tar>=nums[0]) pre[nums[0]]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<=tar;j++){
                int nt=pre[j];
                int take=0;
                if(nums[i]<=j) take=pre[j-nums[i]];
                curr[j]=take+nt;
            }
            pre=curr;
        }
        return pre[tar];
    }
};