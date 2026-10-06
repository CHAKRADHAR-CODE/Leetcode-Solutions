class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> x;
        for(char c:s){
            if(c=='(') x.push(c);
            else{
                if(x.empty() || x.top()!='(') x.push(c);
                else x.pop();
            }
        }
        return x.size();
    }
};