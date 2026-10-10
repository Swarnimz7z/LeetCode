class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.length();
        int x=0;
        for(int i=0;i<n;i++){
            int a=0;
            int b=0;
            int c=0;
            for(int j=i;j<n;j++){
                if(s[j]=='a')
                a=1;
                if(s[j]=='b')
                b=1;
                if(s[j]=='c')
                c=1;
                if(a==1&&b==1&&c==1){
                x=x+n-j;
                break;
                }
            }
        }
        return x;
    }
};