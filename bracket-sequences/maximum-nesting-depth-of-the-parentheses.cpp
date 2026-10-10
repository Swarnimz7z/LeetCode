class Solution {
public:
    int maxDepth(string s) {
        int c=0;
        int x=0;
        for(auto it:s){
            if(it=='(')
            c++;
            if(it==')')
            c--;
            x=max(c,x);
        }
        return x;
    }
};