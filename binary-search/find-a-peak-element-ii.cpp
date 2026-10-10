class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        vector<int>z;
        int c=0;
        int n=mat.size();
        int m=mat[0].size();
        int max=0;
        int x=0;
        int y=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]>=max){
                    max=mat[i][j];
                    x=i;
                    y=j;
                }
            }
        }
        z.push_back(x);
        z.push_back(y);
        return z;
    }
};