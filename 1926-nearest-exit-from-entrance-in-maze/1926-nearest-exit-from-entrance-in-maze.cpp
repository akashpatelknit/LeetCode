typedef pair<int,pair<int,int>> pi;
class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n=maze.size();int m=maze[0].size();
        // vector<vector<int>>dis(n,vector<int>(m,1e9));
         vector<vector<int>>vis(n,vector<int>(m,0));
       
        vis[entrance[0]][entrance[1]]=1;
       queue<pair<int,pair<int,int>>>q;
        
        q.push({0,{entrance[0],entrance[1]}});
        int dr[]={1,-1,0,0};
        int ans=1e9;
        int dc[]={0,0,-1,1};
        while(!q.empty()){
            int di=q.front().first;
            int row=q.front().second.first;
            int col=q.front().second.second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=row+dr[i];
                int nc=col+dc[i];
                if(nr<n && nr>=0 && nc<m && nc>=0 && maze[nr][nc]=='.' && vis[nr][nc]==0){
                    vis[nr][nc]=1;
                    cout<<nr<<" "<<nc<<endl;
                    if(nr== 0 || nr== n-1 || nc==0 || nc==m-1){
                    
                    return di+1;
                    };
                  
                    q.push({1+di,{nr,nc}});
                    
                }
            }
        }
        return -1;
    }
};