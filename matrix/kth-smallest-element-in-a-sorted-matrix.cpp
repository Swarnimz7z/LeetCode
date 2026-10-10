class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        int c=0;
        vector<int> x;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                x.push_back(matrix[i][j]);
            }
        }
        sort(x.begin(),x.end());
        return x[k-1];
    }
};