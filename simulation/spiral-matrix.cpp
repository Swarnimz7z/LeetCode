class Solution {
public:
    vector<int> z;
    void Traverse(vector<vector<int>>& matrix,int x,int y,int v,int step){
        if(step>0)
        for(int i=x;i<y;i+=step)
        z.push_back(matrix[i][v]);
        else
        for(int i=x;i>=y;i+=step)
        z.push_back(matrix[i][v]);
    }
    void Traversez(vector<vector<int>>& matrix,int x,int y,int v,int step){
        if(step>0)
        for(int i=x;i<y;i+=step)
        z.push_back(matrix[v][i]);
        else
        for(int i=x;i>=y;i+=step)
        z.push_back(matrix[v][i]);
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        int i=0,j=0;
        int a=m,b=n;
        while(z.size()<(a)*(b)){            
            Traversez(matrix,j,m,i,1);
            i++;
            Traverse(matrix,i,n,m-1,1);
            m--;
            Traversez(matrix,m-1,j,n-1,-1);
            n--;
            Traverse(matrix,n-1,i,j,-1);
            j++;
        }
        z=vector(z.begin(),z.begin()+a*b);
        return z;
    }
};