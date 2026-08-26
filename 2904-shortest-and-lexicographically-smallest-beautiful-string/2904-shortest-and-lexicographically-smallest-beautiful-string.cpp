class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        map<int,string> x;
        int m = INT_MAX,c=0;
        string y="";
        for(char i:s){
            y+=i;
            if(i=='1') c++;
            if(c==k){
                while(!y.empty() && y[0] == '0') y.erase(0,1); 
                int n = y.length();
                if(x.find(n) == x.end() || y<x[n]) x[n] = y;
                m = min(m,n);
                while(!y.empty() && c==k){
                    if(y[0]=='1') c--;
                    y.erase(0,1);
                }
            }
        }
        if(m == INT_MAX) return "";
        return x[m];
    }
};