class Solution {
public:
    int passwordStrength(string password) {
        int s=0;
        map<char,int> z;
        for(auto it:password){
            if(z[it])
            continue;

            z[it]++;
            if(it>='a'&& it<='z')
            s++;
            if(it>='A'&& it<='Z')
            s+=2;
            if(it>='0'&& it<='9')
            s+=3;
            if(it=='!'||it=='@'||it=='#'||it=='$')
            s+=5;
        }
        return s;
    }
};