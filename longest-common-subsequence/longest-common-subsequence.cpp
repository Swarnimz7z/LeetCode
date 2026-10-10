class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>>z (n+1,vector<int>(m+1,0));
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0){
                z[i][j]=0;
                continue;
               
                }

                if(text1[i-1]==text2[j-1])
                z[i][j]=z[i-1][j-1]+1;
                else
                z[i][j]=max(z[i-1][j],z[i][j-1]);
            }
        }
        return z[n][m];
    }
};