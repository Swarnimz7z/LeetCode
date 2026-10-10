class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int> z;
        int v=0;

        for(int i=0;i<word.size();i++){
            if(word[i]>='A' && word[i]<='Z'){
            if(z[word[i]]==0)
            z[word[i]]=i+1;
            }
            else{
            z[word[i]]=i+1;
            }
        }
        for(int i=0;i<26;i++)
        if(z['a'+i]!=0 && z['A'+i]!=0)
        if(z['a'+i]<z['A'+i])
        v++;

        return v;
    }
};