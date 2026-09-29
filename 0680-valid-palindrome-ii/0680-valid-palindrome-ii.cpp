class Solution {
public:
    bool check(int left, int right, string s){
        while(left<=right){
            if(s[left]!=s[right]){
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
    bool validPalindrome(string s) {
        int left =0;
        int right = s.length()-1;

        while(left<=right){
            if(s[left]!=s[right]){
                return check(left,right-1,s) || check(left+1,right,s);
            }

            left++;
            right--;
        }

        return true;
    }
};