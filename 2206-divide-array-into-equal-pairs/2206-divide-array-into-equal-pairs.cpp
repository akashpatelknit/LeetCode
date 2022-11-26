class Solution {
public:
    bool divideArray(vector<int>& nums) {
        // int x=0;
        // for(auto i:nums) x=x^i;
        // return x==0;
          unordered_map<int,int> m;
        for( auto x : nums)m[x]++;

        for( auto x : nums)
        {
            if( m[x]%2!=0)return false;

        }
        return true;
    }
};