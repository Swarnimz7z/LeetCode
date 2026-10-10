class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        int x=edges.size();
        int v=INT_MAX;
        int s=0;
        
        vector<vector<int>>z(n,(vector<int>(n,-1)));
        for(int i=0;i<x;i++){
            z[edges[i][0]][edges[i][1]]=edges[i][2];
            z[edges[i][1]][edges[i][0]]=edges[i][2];
        }

        for(int k=0;k<n;k++){
            for(int j=0;j<n;j++){
                int c=0;
                for(int i=0;i<n;i++){

                    if(z[i][k]==-1||z[k][j]==-1||i==j)
                    continue;

                    if(z[i][j]==-1)
                    z[i][j]=z[i][k]+z[k][j];
                    else
                    z[i][j]=min(z[i][j],z[i][k]+z[k][j]);

                }
                
            }
        }
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                
                if(z[i][j]>0 && z[i][j]<=distanceThreshold)
                c++;
            }
            if(c<=v)
            {
                v=c;
                s=i;
            }
        }
        return s;
    }
};