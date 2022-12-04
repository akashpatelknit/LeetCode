class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        vector<long int>pre(n);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=nums[i]+pre[i-1];
        }
        int s=n;
        int e=0;
        int ans=0;
        int maxi=1e9;
        for(auto i:pre) cout<<i<<" ";
        cout<<endl;
        for(int i=n-1;i>=0;i--){
            double first=pre[i]/s;
            double second=0;
            if(e>0) second=(pre[n-1]-pre[i])/e;
            int avg=abs(first-second);
            if(avg<=maxi){
                ans=i;
                maxi=avg;
            }
            // cout<<avg<<" "<<first<<" "<<second<<" "<<s<<" "<<e<<endl;
               s--;e++;
        }
        return ans;
    }
};