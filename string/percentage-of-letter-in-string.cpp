class Solution {
public:
    int percentageLetter(string s, char letter) {
        int x=0;
        for(auto it:s)
        if(it==letter)
        x++;
        x=round((x*100)/s.length());
        return x;
    }
};