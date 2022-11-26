class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
        for(int i=0;i<32;i++){
            int a=x&(1<<i);
            int b=y&(1<<i);
            if(a!=b) cnt++;
        }
                       // 5=00101
        cout<<(5<<1);  //   01010
        cout<<(5>>1);   //  00010
        return cnt;
    }
};