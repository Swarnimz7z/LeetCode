class Solution {
public:
    string Count(string x){
        int z=1;
        int n=x.length();
        string s="";
        for(int i=0;i<n-1;i++){
            if(x[i]==x[i+1]){
                z++;
            }
            else{
                s=s+to_string(z)+x[i];
                z=1;
            }
        }
        return s;
    }
    string countAndSay(int n) {
        string s="1";
        for(int i=0;i<n-1;i++)
        s=Count(s+" ");
        return s;
    }
};