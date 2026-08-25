class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size(),k=0,j=0,t=0;
        vector<int> x;
        while(x.size()<n*m){
            for(int i=k;i<m-k;i++) x.push_back(matrix[k][i]);
            k++;
            for(int i=k;i<n-j;i++) x.push_back(matrix[i][m-k]);
            if(x.size()==n*m) return x;
            for(int i=m-1-k;i>=j;i--) x.push_back(matrix[n-k][i]);
            for(int i=n-1-k;i>=k;i--) x.push_back(matrix[i][j]);
            j++;
        }
        return x;
    }
};