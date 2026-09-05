class Solution {
public:
    int minBitFlips(int start, int goal) {
        if(start==goal) return 0;
        string x = bitset<32>(start).to_string();
        string y = bitset<32>(goal).to_string();
        int c = 0;
        for(int i=0;i<32;i++){
            if(x[i] != y[i]) c++;
        }
        return c;
    }
};