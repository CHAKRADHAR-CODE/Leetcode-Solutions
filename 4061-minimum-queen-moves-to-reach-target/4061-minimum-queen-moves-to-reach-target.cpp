class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        if((source[0] == target[0]) && (source[1] == target[1])) return 0;
        if((source[0] == target[0]) || (source[1] == target[1])) return 1;
        int i=source[0],j=source[1],t1=target[0],t2=target[1];
        while(i!=0 && j!=0){
            if(t1==i && t2==j) return 1;
            i--;
            j--;
        }
        i=source[0],j=source[1];
        while(i!=0 && j!=9){
            if(t1==i && t2==j) return 1;
            i--;
            j++;
        }
        i=source[0],j=source[1];
        while(i!=9 && j!=0){
            if(t1==i && t2==j) return 1;
            i++;
            j--;
        }
        i=source[0],j=source[1];
        while(i!=9 && j!=9){
            if(t1==i && t2==j) return 1;
            i++;
            j++;
        }
        return 2;
    }
};