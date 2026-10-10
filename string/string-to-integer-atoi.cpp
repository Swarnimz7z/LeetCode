class Solution {
public:
    int myAtoi(string s) {
        s=s+" ";
        string s1="";
        int c=0;
        for(int i=0;i<s.length()-1;i++){
            if(isdigit(s[i])==false && s[i]!=' ' && s[i]!='-' && s[i]!='+'){
                if(s1==""){
                    s1="0";
                }
                break;
            }
            if((s[i]=='-'||s[i]=='+')&& isdigit(s[i+1])){
                s1=s1+s[i];
            }
            if((s[i]=='-'||s[i]=='+')&& isdigit(s[i+1])==false){
                break;
            }
            if(isdigit(s[i])){
                s1=s1+s[i];
                c++;
                    if(stol(s1)>pow(2,31)-1){
        return pow(2,31)-1;
    }
    if(stol(s1)<pow(-2,31)){
        return pow(-2,31);
    }
               if (isdigit(s[i+1])==false){
                break;
               }
            }
        }
    cout<<s1;
            if(c==0){
        s1="0";
    }
    return stoi(s1);
    }
};