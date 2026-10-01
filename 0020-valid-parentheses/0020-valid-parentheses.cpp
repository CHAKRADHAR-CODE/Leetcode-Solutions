class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        for(char i:s){
            if(i=='(' || i=='[' || i=='{') x.push(i);
            else{
                if(!x.empty() && ((i==')' && x.top()=='(') || (i==']' && x.top()=='[') || (i=='}' && x.top()=='{'))) x.pop();
                else return false;
            }
        }
        if(x.empty()) return true;
        return false;
    }
};