class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0;
        int closed=0;
        for(auto it:s){
            if(it=='(')
            open++;
            if(it==')')
            {   closed++;
                if(closed>0 && open>0){
                open--;
                closed--;
                }
            }
        }
        return open+closed;
        
    }
};