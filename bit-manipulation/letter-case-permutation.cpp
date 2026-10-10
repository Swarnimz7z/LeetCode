class Solution {
public:
    void Finally(set<string>& x,string s,int v){
        if(v==s.length()){
            x.insert(s);
            return;
        }
        s[v]=tolower(s[v]);
        Finally(x,s,v+1);
        s[v]=toupper(s[v]);
        Finally(x,s,v+1);
    }
    vector<string> letterCasePermutation(string s) {
        set<string> x;
        Finally(x,s,0);
        vector<string> z=vector(x.begin(),x.end());
        return z;
    }
};