class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int low1=0;
        int n=matrix.size();
        int m=matrix[0].size();
        int high=n-1;
        int high2=m-1;
        int x=0;
        // while(low<=high && low1<=high2){
        //     int mid=(low+high)/2;
        //     int mid1=(low1+high2)/2;
        //     cout<<matrix[mid][mid1]<<endl;
        //     if(matrix[mid][mid1]==target){
        //         x=1;
        //         break;
        //     }
        //     else if(matrix[mid][mid1]<target){
        //         low=mid+1;
        //         low1=mid1+1;
        //     }
        //     else if(matrix[mid][mid1]>target){
        //         high=mid-1;
        //         high2=mid1-1;
        //     }
        // }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==target)
                x=1;
            }
        }
        return x;
    }
};