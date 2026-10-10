class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int c=1;
        string s=a;
        while(a.find(b)>=a.length()){
        a=a+s;
        c++;
        if(a.length()>10000)
        return -1;
        }
        return c;
    }
};