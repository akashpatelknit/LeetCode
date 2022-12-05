class Solution {
public:
long long digsum(long long  n){
        long long sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long long cnt=0;
        long long a=n;
        long long sum=0;
        while(a>0){
            cnt++;
            sum+=a%10;
            a=a/10;
        }
         if(sum<=target) return 0;
        if(target==sum){
            return pow(10,cnt)-sum;
        }
        long long temp=n;
       long long div=10;
               while(digsum(temp)> target){
            long long mod=n%div;
             temp=n+div-mod;
            
            div*=10;
        }
       ;
        return temp-n;
    }
};