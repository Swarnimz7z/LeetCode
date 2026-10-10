class Solution {
public:
    int reverseDegree(string s) {
        int x=0;
        for(int i=0;i<s.length();i++){
            int z=s[i]-97;
            z=26-z;
            x+=z*(i+1);
        }
        return x;
    }
};