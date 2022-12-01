class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int c1=0,c2=0;
        for(int i=0;i<n/2;i++){
            if(s[i]=='a' or s[i]=='A' or s[i]=='e' or s[i]=='E' or s[i]=='i' or s[i]=='I' or s[i]=='o' or s[i]=='O' or s[i]=='u' or s[i]=='U')c1++;
        }

        for(int i=n/2;i<n;i++){
            if(s[i]=='a' or s[i]=='A' or s[i]=='e' or s[i]=='E' or s[i]=='i' or s[i]=='I' or s[i]=='o' or s[i]=='O' or s[i]=='u' or s[i]=='U')c2++;
        }

        if(c1==c2)return true;
        return false;
    }
};