class Solution {
public:
    string Numeral(int n){
        string s=to_string(n);
        int x=s.length();
        x=4-x;
        string z="";
        for(int i=0;i<x;i++){
            z=z+"0";
        }
        z=z+s;
        return z;
    }
    int generateKey(int num1, int num2, int num3) {
        string x=Numeral(num1);
        string y=Numeral(num2);
        string z=Numeral(num3);
        string v="";
        for(int i=0;i<4;i++){
            int a=x[i]-'0';
            int b=y[i]-'0';
            int c=z[i]-'0';
            int s=min(c,min(a,b));
            v=v+to_string(s);
        }
        int Z=stoi(v);
        return Z;
    }
};