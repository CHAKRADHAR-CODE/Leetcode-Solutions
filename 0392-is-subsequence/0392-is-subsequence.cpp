class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length(),m = t.length(),i=0,j=0;
        if(n>m) return false;
        while(i<n){
            if(j==m) return false;
            if(s[i]!=t[j]) j++;
            else{
                i++;
                j++;
            }
        }
        if(i == n) return true;
        return false;
    }
};