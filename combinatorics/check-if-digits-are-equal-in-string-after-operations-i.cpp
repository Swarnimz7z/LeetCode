class Solution {
public:
    string shorten(string s){
        if(s.length()==2)
        return s;
        string x="";
        for(int i=0;i<s.length()-1;i++){
            int y=s[i]-'0';
            int z=s[i+1]-'0';
            z=(y+z)%10;
            string v=to_string(z);
            x+=v;
        }
        x=shorten(x);
        return x;
    }
    bool hasSameDigits(string s) {
        string x=shorten(s);
        return x[0]==x[1];
    }
};