class Solution {
public:
    int f(int idx,int maxday,vector<int>&days, vector<int>& costs, vector<int>&dp){
        if(idx==days.size()) return 0;
        if(maxday>=days[idx]){
            return f(idx+1,maxday,days,costs,dp);
        }
        if(dp[idx]!=-1) return dp[idx];
        int first=costs[0]+f(idx+1,days[idx],days,costs,dp);
        int second=costs[1]+f(idx+1,days[idx]+6,days,costs,dp);
        int third=costs[2]+f(idx+1,days[idx]+29,days,costs,dp);
        return dp[idx]= min(first,min(second,third));
        
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days.size(),-1);
        return f(0,0,days,costs,dp);
    }
};