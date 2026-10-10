class Solution {
public:
    int lengthOfLastWord(string s) {
        s=" "+s+" ";
        int z=0;
        for(int i=s.length()-2;i>=0;i--){
            if(s[i]==' ' && s[i+1]!=' '){
                cout<<z<<" "<<i;
                s=s.substr(i+1,z-i);
                break;
            }
            if(s[i+1]==' '){
                z=i;
            }
        }
    return s.length();
    }
};