class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int m=s.size();
        if(n==0 || m==0)
        return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        if(g[0]>s[m-1])
        return 0;
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i]<=s[j]){
                c++;
                s[j]=0;
                break;
                }
            }
        }
        return c;
    }
};