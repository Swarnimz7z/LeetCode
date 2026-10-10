class Solution {
public:
    string reverseWords(string s) {
        s=" "+s+" ";
        int n=s.length();
        string s1="";
        for(int i=s.length()-2;i>=0;i--){
            if(s[i]==' ' && s[i+1]!=' '){
                s1=s1+s.substr(i+1,n-i);
            }
            if(s[i]==' '){
                n=i;
            }
            
        }
        return s1.substr(0,s1.length()-1);
    }
};