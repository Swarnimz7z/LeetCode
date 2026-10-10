class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int v=0;
        for(auto it:patterns)
        if(word.find(it)<word.size())
        v++;
        return v;
    }
};