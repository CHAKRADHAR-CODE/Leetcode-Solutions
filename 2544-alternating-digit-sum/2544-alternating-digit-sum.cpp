class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> x;
        while(n!=0){
            x.push_back(n%10);
            n/=10;
        }
        int z=1,s=0;
        for(int i=x.size()-1;i>=0;i--){
            if(z){
                s+=x[i];
                z=0;
            }
            else{
                s-=x[i];
                z=1;
            }
        }
        return s;
    }
};