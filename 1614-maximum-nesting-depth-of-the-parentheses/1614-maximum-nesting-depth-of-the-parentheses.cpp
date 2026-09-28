class Solution {
public:
    int maxDepth(string s) {
        int c = 0,m = INT_MIN;
        for(char i:s){
            if(i=='(') c++;
            else if(i==')') c--;
            m = max(m,c);
        }
        return m;
    }
};