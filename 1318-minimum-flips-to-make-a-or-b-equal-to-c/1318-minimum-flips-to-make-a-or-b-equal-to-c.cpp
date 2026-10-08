class Solution {
public:
    int minFlips(int a, int b, int c) {
        int f = 0;
        for(int i=0;i<30;++i){
            int ba = (a>>i)&1,bb=(b>>i)&1,bc=(c>>i)&1;
            if(bc == 1){
                if(!ba && !bb) f++;
            }
            else f += ba+bb;
        }
        return f;
    }
};