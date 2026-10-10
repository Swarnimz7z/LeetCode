class Solution {
public:
    void Answer(set<string>& x,string s,int v,int m,int &n){
        if(v+m==n+n){
            if(v==n && m==n){
            x.insert(s);
            }
            return;
        }
        if(m<n){
        s=s+"(";
        m=m+1;
        Answer(x,s,v,m,n);
        }
        while(v<m){
        s=s+")";
        v++;
        Answer(x,s,v,m,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        set<string> x;
        Answer(x,"",0,0,n);
        vector<string> z=vector(x.begin(),x.end());
        return z;
    }
};