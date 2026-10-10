class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map<char,char> z;
        unordered_map<char,int> v;
        vector<string> x;
        int n=pattern.length();
        for(int i=0;i<words.size();i++){
            z.clear();
            v.clear();
            int c=0;
            string m=words[i];
            for(int j=0;j<n;j++){
                if(!z[m[j]] && v[pattern[j]]==0){
                z[m[j]]=pattern[j];
                v[pattern[j]]=1;
                c++;
                }
                else if(z[m[j]]==pattern[j])
                c++;
            }
            if(c==n)
            x.push_back(words[i]);
        }
        return x;
    }
};