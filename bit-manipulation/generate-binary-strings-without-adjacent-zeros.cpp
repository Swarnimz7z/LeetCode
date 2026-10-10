class Solution {
public:
    void generate(vector<string>& x,string s,int n){
        if(s.length()==n){
            x.push_back(s);
            return;
        }
        int v=s.length();
        if(s[v-1]=='1'){
            generate(x,s+"0",n);
            generate(x,s+"1",n);
        }
        else{
            generate(x,s+"1",n);
        }
    }
    vector<string> validStrings(int n) {
        string s="";
        vector<string> x;
        generate(x,"0",n);
        generate(x,"1",n);
        return x;
    }
};