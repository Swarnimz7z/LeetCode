class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int z=0;
        for(int i=0;i<n-1;i++){
            int x=s[i];
            int y=s[i+1];
            z=z+abs(x-y);
        }
        return z;
    }
};