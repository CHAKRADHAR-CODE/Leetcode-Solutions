class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> b(n);
        int c = 0;
        string s = b.to_string();
        for(char i:s){
            if(i=='1') c++;
        }
        return c;
    }
};