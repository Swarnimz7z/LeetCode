class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        int c=0;
        int v=0;
        int l=0;
        string x="";
        for(int i=0;i<n;i++){
            if(s[i]=='(')
                c++;
            else
                c--;
            if(c==0){
                x=x+s.substr(v+1,l-1);
                l=-1;
                v=i+1;
            }
            l++;
        }
        return x;
    }
};