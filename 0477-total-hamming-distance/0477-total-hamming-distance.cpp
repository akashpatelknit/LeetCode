class Solution {
public:
    // int csb(int a){
    //     return __builtin_popcount(a);
    // }
    // int cub(int b){
    //     int cnt=0;
    //     for(int i=0;i<32;i++){
    //         if(n&(1<<i)==0) cnt++;
    //     }
    //     return cnt;
    // }
    int totalHammingDistance(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<32;i++){
            int x=0,y=0;
            for(auto a:nums){
                if((a&(1<<i))==0) x++;
                   else y++;
                
            }
            ans+=(x*y);
        }
        return ans;
    }
};