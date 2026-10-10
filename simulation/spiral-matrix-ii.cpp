class Solution {
public:
    int z=1;
    void Traverse(vector<vector<int>>& matrix,int x,int y,int v,int step){
        if(step>0)
        for(int i=x;i<y;i+=step){
        matrix[i][v]=z;
        z++;
        }
        else
        for(int i=x;i>=y;i+=step){
        matrix[i][v]=z;
        z++;
        }
    }
    void Traversez(vector<vector<int>>& matrix,int x,int y,int v,int step){
        if(step>0)
        for(int i=x;i<y;i+=step){
        matrix[v][i]=z;
        z++;
        }
        else
        for(int i=x;i>=y;i+=step){
        matrix[v][i]=z;
        z++;
        }
    }
    vector<vector<int>> generateMatrix(int n) {
        int m=n;
        vector<vector<int>>matrix(n,vector<int>(n,0));
        int i=0,j=0;
        int a=m,b=n;
        while(z<=a*b){            
            Traversez(matrix,j,m,i,1);
            i++;
            Traverse(matrix,i,n,m-1,1);
            m--;
            Traversez(matrix,m-1,j,n-1,-1);
            n--;
            Traverse(matrix,n-1,i,j,-1);
            j++;
        }
        return matrix;
    }
};