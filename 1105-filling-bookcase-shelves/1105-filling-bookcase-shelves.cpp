class Solution {
public:
    int f(int ind,int shelfWidth,int maxht,int maxwd, vector<vector<int>>& books,vector<vector<int>>&dp){
        if(ind==books.size()) return maxht;
        if(dp[ind][shelfWidth]!=-1) return dp[ind][shelfWidth];
        int curwd=books[ind][0];
        int curht=books[ind][1];
        if(curwd<=shelfWidth){
            int take=f(ind+1,shelfWidth-curwd,max(maxht,curht),maxwd,books,dp);
            
            int nottake=maxht+f(ind+1,maxwd-curwd,curht,maxwd,books,dp);
            return dp[ind][shelfWidth]= min(take,nottake);
        }
        return dp[ind][shelfWidth]= maxht+f(ind+1,maxwd-curwd,curht,maxwd,books,dp);
        
    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        int n=books.size();
        int maxwd=shelfWidth;
        vector<vector<int>>dp(n,vector<int>(shelfWidth+1,-1));
        return f(0,shelfWidth,0,maxwd,books,dp);
    }
};