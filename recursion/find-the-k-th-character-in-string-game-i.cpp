class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.length()<k){
            string z="";
            for(int i=0;i<s.length();i++){
                char c=s[i]++;
                if(s[i]=='z')
                c='a';
                z=z+c;
            }
            s=z+s;
        }
        return s[k-1];
    }
};