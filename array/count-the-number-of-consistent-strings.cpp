class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int m=allowed.length();
        int c=0;
        unordered_map<int,int> z;
        for(int k=0;k<m;k++){
            z[allowed[k]]++;
        }
        for(int i=0;i<words.size();i++){
            int n=words[i].length();
            int v=0;
            for(int j=0;j<n;j++){
                if(z[words[i][j]]==0){
                    v=1;
                    break;
                }
            }
            if(v==0)
            c++;
        }
        return c;
    }
};