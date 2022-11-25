class Solution {
public:
    bool isSet(int i,uint32_t n){
        if(n & (1 << (i - 1))) return true;
        return false;
    }
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=1;i<=32;i++){
            if(isSet(i,n)){
                ans=1<<(32-i)|ans;
            }
        }
        return ans;
    }
};