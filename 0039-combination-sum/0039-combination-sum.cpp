class Solution {
public:
    void solve(int i,int tar, vector<vector<int>>&ans,vector<int>&ds,vector<int>arr){
        if(i==arr.size()){
            if(tar==0){
                ans.push_back(ds);
               
            }
             return;
        }
        if(arr[i]<=tar){
            ds.push_back(arr[i]);
            solve(i,tar-arr[i],ans,ds,arr);
            ds.pop_back();
        }
        solve(i+1,tar,ans,ds,arr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,target,ans,ds,candidates);
        return ans;
    }
};