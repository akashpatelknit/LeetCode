class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int x=*max_element(arr.begin(),arr.end());
        vector<pair<int,int>>vp;
        for(auto i:arr){
            int a=__builtin_popcount(i);
            vp.push_back({a,i});
        }
        vector<int>v;
        sort(vp.begin(),vp.end());
        for(auto i:vp){
            v.push_back(i.second);
        }
        return v;
    }
};