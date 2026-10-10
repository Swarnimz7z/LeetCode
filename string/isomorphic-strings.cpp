class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>z;
        unordered_map<char,char>y;
        int x=1;
        for(int i=0;i<s.length();i++){
            if(z[s[i]]==0 && y[t[i]]==0){
                z[s[i]]=t[i];
                y[t[i]]=s[i];
            }
            else{
                if(z[s[i]]!=t[i] || y[t[i]]!=s[i]){
                    x=0;
                }
            }
        }
        return x;
    }
};