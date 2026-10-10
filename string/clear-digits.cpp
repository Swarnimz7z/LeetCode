class Solution {
public:
    string clearDigits(string s) {
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                s=s.substr(0,i-1)+s.substr(i+1);
                c=1;
                break;
            }
        }
        if(c==0){
            return s;
        }
        else{
            s=clearDigits(s);
        }
        return s;
    }
};