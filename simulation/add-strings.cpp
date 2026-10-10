class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.length();
        int m=num2.length();
        int i=n-1;
        int j=m-1;
        string s="";
        int c=0;
        while(i>=0 || j>=0){
            int p=0;
            int q=0;
            if(i>=0){
                p=(num1[i])-'0';
                i--;
            }
            if(j>=0){
                q=(num2[j])-'0';
                j--;
            }
            int v=p+q+c;
            c=v/10;
            s=to_string(v%10)+s;
        }
        if(c){
            s=to_string(c)+s;
        }
        return s;
    }
};