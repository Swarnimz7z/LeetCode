class Solution {
public:
    void Traverse(vector<vector<int>>&z,int i,int j,int &color,int &src){
        if(i<0 || i==z.size() || j<0 || j==z[0].size())
        return;

        if(z[i][j]==src)
        z[i][j]=color;
        else
        return;

        Traverse(z,i+1,j,color,src);

        Traverse(z,i,j+1,color,src);

        Traverse(z,i-1,j,color,src);

        Traverse(z,i,j-1,color,src);        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int x=image[sr][sc];

        if(image[sr][sc]==color)
        return image;

        Traverse(image,sr,sc,color,x);
        return image;
    }
};