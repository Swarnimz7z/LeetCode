class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        n=s.length();
        int x=s[n-1]-'0';
        int y=s[n-2]-'0';
        return x*y;
    }
};