class Solution {
public:
    int numberOfSpecialChars(string word) {
        int c=0;
        for(int i=0;i<26;i++){
            if(word.find('a'+i)<word.size() && word.find('A'+i)<word.size())
            c++;
        }
        return c;
    }
};