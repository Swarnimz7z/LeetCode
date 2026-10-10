class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n=s.length();
        int x=0;
        int power=0;
        string z="";
        for(int i=n-1;i>=0;i--){
            int v=s[i]-'0';
            if(x+v*pow(2,power)<=k){
                x=x+v*pow(2,power);
                z=s[i]+z;
            }
            power++;
        }
        return z.length();
    }
};