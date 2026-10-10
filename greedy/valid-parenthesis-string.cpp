class Solution {
public:
    bool checkValidString(string s) {
        int minopen=0;
        int maxopen=0;
        for(auto it:s){
            if(it=='('){
                minopen++;
                maxopen++;
            }
            else if(it==')'){
                minopen--;
                maxopen--;
            }
            else{
                minopen--;
                maxopen++;
            }
            if(maxopen<0)
            return false;

            minopen=max(minopen,0);
        }
        if(max(minopen,0)==0)
        return 1;
        else
        return 0;
    }
};