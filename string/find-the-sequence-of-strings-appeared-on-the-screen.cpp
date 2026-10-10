class Solution {
public:
    vector<string> stringSequence(string target) {
        string s="";
        vector<string> x;
        for(int i=0;i<target.length();i++){
            s=s+"a";
            x.push_back(s);
            while(s[i]!=target[i]){
                int v=s[i];
                s[i]++;
                x.push_back(s);
            }
        }
        return x;
    }
};