class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> x;
        for(int i=0;i<=rowIndex;i++){
            vector<int> r(i+1,1);
            for(int j=1;j<i;j++) r[j]=x[i-1][j-1]+x[i-1][j];
            x.push_back(r);
        }
        return x.back();
    }
};