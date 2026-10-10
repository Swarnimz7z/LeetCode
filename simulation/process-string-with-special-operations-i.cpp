class Solution {
public:
    string processStr(string s) {
        string v="";
        for(auto it:s){
        if('a'<=it && it<='z')
        v+=it;

        if(it=='*')
        v=v.substr(0,v.size()-1);

        if(it=='#')
        v+=v;

        if(it=='%')
        reverse(v.begin(),v.end());
        }
        return v;
    }
};