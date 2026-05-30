class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& v) {
       map<string,vector<string>>mp;
       for(auto i:v){
           string temp=i;
           sort(i.begin(),i.end());
           mp[i].push_back(temp);
       }
       vector<vector<string>>ans;
       for(auto i:mp){
           ans.push_back(i.second);
       }
       return ans;

    }
};