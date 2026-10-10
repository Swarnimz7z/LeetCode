class Solution {
public:
    int numSub(string s) {
        int c=0;
        int v=pow(10,9)+7;
        int x=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='0')
            c=0;
            if(s[i]=='1'){
                c++;
                x=x%v;
                x+=c;
            }
        }
        return x;
    }
};