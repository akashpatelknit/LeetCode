class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        // n=abs(n);
    // (1 << i) = pow(2, i)
    for (int i = 0; i < sizeof(int) * 8; i++) {
        if (n & (1 << i))
            count++;
    }
      return __builtin_popcountll(n)==1;
    }
};