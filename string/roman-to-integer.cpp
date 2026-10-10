class Solution {
public:
    int romanToInt(string s) {
        map<char,int> v={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.length();
        int x=0;
        int z=0;
        for(int i=n-1;i>=0;i--){
            if(v[s[i]]>=x){
                z+=x;
                x=v[s[i]];
            }
            if(v[s[i]]<x){
                x-=v[s[i]];
            }
        }
        return x+z;
    }
};