class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> x;
        int n = mat.size(),m = mat[0].size(),i=0,j=0;
        while(x.size() != n*m){
            while(i>=0){
                x.push_back(mat[i--][j++]);
                if(j==m){
                    j--;
                    i++;
                    break;
                }
            }
            i++;
            if(x.size() == n*m) return x; 
            while(j>=0){
                x.push_back(mat[i++][j--]);
                if(i==n){
                    i--;
                    j++;
                    break;
                }
            }
            j++;
        }
        return x;
    }
};



