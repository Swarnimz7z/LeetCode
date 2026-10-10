class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        int x=0;
        if(m!=n){
        }
        else{
        unordered_map<char,int> z;
        unordered_map<char,int> y;
        for(int i=0;i<n;i++){
            z[s[i]]+=1;
            y[t[i]]+=1;
        }
        if(z==y){
            x=1;
        }
        }
        return x;
    }
};