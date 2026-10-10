class Solution {
public:
    int possibleStringCount(string word) {
        int s=1;
        int n=word.length();
        for(int i=0;i<n-1;i++){
            if(word[i]==word[i+1])
            s++;
        }
        return s;
    }
};