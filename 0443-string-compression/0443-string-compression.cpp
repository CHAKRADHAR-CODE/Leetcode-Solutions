class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        char j = ' ';
        int c=0;
        for(char i:chars){
            if(i!=j){
                if(j != ' '){
                    s+=j;
                    if(c!=1) s+=to_string(c);
                }
                j=i;
                c=0;
            }
            c++;
        }
        if(j != ' '){
            s+=j;
            if(c!=1) s+=to_string(c);
        }
        cout << s << endl;
        int i=0;
        for(char g:s){
            chars[i++] = g;
        }
        return s.length();
    }
};