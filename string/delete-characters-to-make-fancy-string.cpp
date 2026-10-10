class Solution {
public:
    string makeFancyString(string s) {
        string x;
        int c=0;
        char v=s[0];
        x.push_back(v);
        for(auto it:s){
            if(c==0){
                c++;
                continue;
            }
            if(v==it){
                c++;
                if(c>=3){
                    continue;
                }
                x.push_back(it);
                v=it;

            }
            else{
                c=1;
                x.push_back(it);
                v=it;
            }
        }
        return x;

    }
};