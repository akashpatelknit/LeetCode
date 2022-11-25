class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int d) {
          int k=0;
        int n=nums.size();
    int ts=0;for(auto i:nums) ts+=i;
    if(ts-d<0 || (ts-d)%2==1) return 0;
    else k=(ts-d)/2;
   vector<vector<int>>dp(n,vector<int>(k+1,0));
    vector<int>pre(k+1,0),curr(k+1,0);
   if(nums[0]==0){
       pre[0]=2;
   }else pre[0]=1;
    
    if(nums[0]!=0 && nums[0]<=k)pre[nums[0]]=1;
    for(int i=1;i<n;i++){
        for(int tar=0;tar<=k;tar++){
            int nottake=pre[tar];
            int take=0;
            if(nums[i]<=tar) take=pre[tar-nums[i]];
            curr[tar]=(take+nottake)%(int)(1e9+7);
        }
        pre=curr;
    }
    return pre[k];
    }
};