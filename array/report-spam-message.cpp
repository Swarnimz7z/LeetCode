class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_map<string,int> x;
        int c=0;
        for(auto it:message)
        x[it]++;
        for(auto it:bannedWords){
            if(x[it]){
            c+=x[it];
            x[it]=0;
            }
            if(c>=2)
            return true;
        }
        return 0;
    }
};