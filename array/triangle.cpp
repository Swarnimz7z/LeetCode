class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int sum=triangle[0][0];
        for(int i=1;i<n;i++){
            int m=triangle[i].size();
            if(i==n-1)
            sum=INT_MAX;
            for(int j=0;j<m;j++){
                if(j==0)
                triangle[i][0]+=triangle[i-1][0];
                else if(j==m-1)
                triangle[i][j]+=triangle[i-1][j-1];
                else
                triangle[i][j]+=min(triangle[i-1][j],triangle[i-1][j-1]);
                if(i==n-1){
                    sum=min(sum,triangle[i][j]);
                }
            }
        }
        return sum;
    }
};