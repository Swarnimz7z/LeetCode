class Solution {
public:
    string stringHash(string s, int k) {
       string result="";
       int v=0;
       int n=s.length();
       for(int i=0;i<n;i++){
        int w=s[i];
        w=w%97;
        v=v+w;
        if((i+1)%k==0){
            v=v%26;
            char c=97+v;
            result=result+c;
            v=0;
        }
       }
       return result; 
    }
};