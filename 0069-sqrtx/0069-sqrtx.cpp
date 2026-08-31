class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        long long l=1,h=x/2;
        while(l<=h){
            long long m = l+(h-l)/2;
            long long s = m*m;
            if(s==x) return (int)m;
            else if(s<x) l = m+1;
            else h = m-1;
        }
        return (int)h;
    }
};