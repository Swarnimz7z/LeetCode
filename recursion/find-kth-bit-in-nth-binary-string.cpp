class Solution {
public:
    string inverse(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]=='0')
            s[i]='1';
            else
            s[i]='0';
        }
        return s;
    }
    char findKthBit(int n, int k) {
        string s="0";
        for(int i=0;i<n-1;i++){
            string v=s;
            v=inverse(v);
            reverse(v.begin(),v.end());
            s=s+"1"+v;
        }
        return s[k-1];
    }
};