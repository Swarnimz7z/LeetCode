class Solution {
public:
    bool isFascinating(int n) {
        string s=to_string(n)+to_string(n*2)+(to_string(n*3));
        unordered_map<char,int> z;
        for(int i=0;i<s.length();i++){
                z[s[i]]++;
        }
        if(z['1']==1&&z['2']==1&&z['3']==1&&z['4']==1&&z['5']==1&&z['6']==1&&z['7']==1&&z['8']==1&&z['9']==1&&z['0']==0)
        return 1;
        return 0;

    }
};