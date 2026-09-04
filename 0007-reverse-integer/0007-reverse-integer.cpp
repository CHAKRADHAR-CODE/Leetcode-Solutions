class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        int i = 0;
        if(s[i] == '-') i++;
        ::reverse(s.begin()+i,s.end());
        long long n = stoll(s);
        return n<INT_MIN || n>INT_MAX ? 0 : (int)n;
    }
};