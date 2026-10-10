class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.length()-1;
        int m=b.length()-1;
        string s="";
        int c=0;
        while(n>=0||m>=0){
            int p=0;
            int q=0;
            int v=0;
            if(n>=0){
            p=a[n]-'0';
            n--;
            }
            if(m>=0){
            q=b[m]-'0';
            m--;
            }
            v=(p+q+c);
            c=v/2;
            v=v%2;
            cout<<v;
            s=to_string(v)+s;
        }
        if(c)
        s=to_string(c)+s;
        return s;
    }
};