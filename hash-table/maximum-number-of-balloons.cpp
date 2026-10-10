class Solution {
public:
    int maxNumberOfBalloons(string text) {
       unordered_map<char,int> z;
        string s="balon";
       for(int i=0;i<text.size();i++){
           z[text[i]]++;
       }
       int i=0;
       int v=INT_MAX;
        while(z[s[i]]){
            if(s[i]=='o'||s[i]=='l'){
            z[s[i]]/=2;
            }
            v=min(v,z[s[i]]);
            z[s[i]]--;
            i++;
            if(i==s.size())
                return v;
        }

        return 0;
    }
};