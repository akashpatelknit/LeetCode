class Solution {
public:
    bool isPalindrome(string s) {
        string new_string = "";
        for (auto ch : s) {
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
                new_string += tolower(ch);
            }
        }

        int left = 0;
        int right = new_string.length() - 1;

        while (left <= right) {
            if (new_string[left] != new_string[right])
                return false;

            left++;
            right--;
        }

        return true;
    }
};