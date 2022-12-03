class Solution {
public:
       bool static cmp(pair<char, int>& a, pair<char, int>& b){
        return a.second > b.second;
    }
    string frequencySort(string s) {
        map<char,int>m;
        for(auto i:s) m[i]++;
        vector<pair<char,int>>v;
        for(auto i:m){
            v.push_back(i);
        } 
        // for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
        sort(v.begin(),v.end(),cmp);
        string ans="";
        for(auto i:v){
            // cout<<i.first<<" "<<i.second<<endl;
           for(int j=0;j<i.second;j++){
               ans+=i.first;
           }
        }
        
        return ans;
    }
};