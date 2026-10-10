class Solution {
public:
    string convert(string s, int numRows) {
        vector<vector<char>> x;
        if(numRows==1)
        return s;
        x.resize(numRows);
        int i=0;
        int j=0;
        int k=0;
        string z="";
        while(i!=s.length()){
            x[j].push_back(s[i]);
            i++;
            if(j==0)
            k=0;
            if(j==numRows-1)
            k=1;
            if(k==0)
            j++;
            if(k==1)
            j--;
        }
        for(int i=0;i<numRows;i++){
            for(int j=0;j<x[i].size();j++)
            z=z+x[i][j];
        }
        return z;
    }
};