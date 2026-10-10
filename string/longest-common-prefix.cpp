class Solution {
public:
    string common(string s,string s1){
        string z="";
        for(int i=0;i<s.length();i++){
            if(s[i]==s1[i]){
                z=z+s[i];
            }
            else{
                break;
            }
        }
        return z;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        for(int i=1;i<strs.size();i++){
            s=common(s,strs[i]);
            if(s==""){
                break;
            }
        }
        return s;
    }
};