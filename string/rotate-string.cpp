class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();

        string z=s;
        for(int i=0;i<n;i++){
            if(s.substr(i,n)==goal)
            return true;
            s=s+s[i];
        }
        return false;
    }
};