class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        int n=s.length();
        int i=0;
        while(s[i]!='6' && i<n-1){
            i++;
        }
        s[i]='9';
        num=stoi(s);
        return num;
    }
};