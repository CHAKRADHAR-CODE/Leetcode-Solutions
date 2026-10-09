class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> x;
        string r="";
        for(char i:s){
            if(i=='('){
                if(!x.empty()) r+=i;
                x.push(i);
            }
            else{
                x.pop();
                if(!x.empty()) r+=i;
            }
        }
        return r;
    }
};