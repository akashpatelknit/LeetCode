class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        int j=0;
        for(auto i:points){
            int d=i[0]*i[0]+i[1]*i[1];
            q.push({d,{i[0],i[1]}});
                  
        }
        // vector<vector<int>>ans; 
        points.clear();
        while(k--){
           auto it=q.top();
            q.pop();
            auto idx=it.second;
            points.push_back({idx.first,idx.second});
        }
                   return points;
    }
};