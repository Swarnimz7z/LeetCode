class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string v="";
        for(int i=0;i<n;i++){
            int x=words[i].size();
            int s=0;
            for(int j=0;j<x;j++){
                int y=words[i][j]-96;
                s=s+weights[y-1];
            }
            s=s%26;
            char c='a'+(25-s);
            v=v+c;
        }
        return v;
    }
};