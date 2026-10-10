class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++){
            string x="";
            string v="";
            for(int j=i;j<n;j++){
                x=s[j]+x;
                v=v+s[j];
                if(x==v)
                c++;
            }
        }
        return c;
    }
};