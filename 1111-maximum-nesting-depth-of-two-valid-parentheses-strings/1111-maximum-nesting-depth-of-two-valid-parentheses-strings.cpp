class Solution {
public:
    int in(int i){
        if(i%2==0) return 1;
        else return 0;
    }
    vector<int> maxDepthAfterSplit(string seq) {
        int i=0;
        vector<int> x;
        for(char a:seq){
            if(a=='('){
                i++;
                x.push_back(in(i));
            }
            else{ 
                x.push_back(in(i));
                i--;
            }
        }
        return x;
    }
};
