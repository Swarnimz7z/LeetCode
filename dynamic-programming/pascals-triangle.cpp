class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> x(numRows,vector<int>(numRows,1));
        for(int i=2;i<numRows;i++){
            for(int j=1;j<=i-1;j++){
                x[i][j]=x[i-1][j]+x[i-1][j-1];
                x[i].resize(i+1);
            }
        }
        x[0].resize(1);
        if(numRows>1)
        x[1].resize(2);
        return x;
    }
};