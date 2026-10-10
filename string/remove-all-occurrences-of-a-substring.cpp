class Solution {
public:
    string remove(string s,string s2,int m,int c){
        int n=s.length();
        if(c==0 || s==""){
            return s;
        }
        else{
            int c=0;
        for(int i=0;i<n;i++){
            string s1=s.substr(i,m);
                if(s1==s2){
                    c=1;
                    s=s.substr(0,i)+s.substr(i+m,n);
                    break;
                }
            }
            s=remove(s,s2,m,c);
        }
        return s;
    }
    string removeOccurrences(string s, string part) {
        int m=part.length();
        s=remove(s,part,m,-1);
        return s;

    }
};