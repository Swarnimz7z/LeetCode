class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<int,int> x;
        for(auto it:s)
        if(x[it]==1)
        return it;
        else
        x[it]++;
        return 'z';
    }
};