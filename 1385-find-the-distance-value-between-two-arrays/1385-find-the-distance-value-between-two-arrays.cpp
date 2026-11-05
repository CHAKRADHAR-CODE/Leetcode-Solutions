class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int c = 0;
        for(int i:arr1){
            bool x = true;
            for(int j:arr2){
                if(abs(i-j)<=d){
                    x=false;
                    break;
                }
            }
            if(x) c++;
        }
        return c;
    }
};