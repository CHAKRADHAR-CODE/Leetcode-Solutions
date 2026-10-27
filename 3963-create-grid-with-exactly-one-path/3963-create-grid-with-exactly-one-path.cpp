class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>> x(m,vector<char>(n,'#'));
        vector<string> y;
        int i=0,j=0;
        x[i][j] = '.';
        x[m-1][n-1] = '.';
        while(i!=m-1 || j!=n-1){
            if(j+1<n) x[i][++j] = '.';
            if(i+1<m) x[++i][j] = '.';
        }
        for(int a=0;a<m;a++){
            string c = "";
            for(int b=0;b<n;b++) c+=x[a][b];
            y.push_back(c);
        }
        return y;
    }
};