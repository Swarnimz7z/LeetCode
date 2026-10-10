class Solution {
public:
    bool doesAliceWin(string s) {
        int c=0;
        for(auto it:s){
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u')
            {
            c=1;
            break;
            }
        }
        if(c==0)
        return false;
        else
        return true;
    }
};