class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=0;
        int m=0;
        int s=0;
        for(auto it:bank){
            n=0;
            for(auto c:it){
                if(c=='1')
                n++;
            }
            if(n>0){
            s=s+n*m;
            m=n;
            }
        }
        return s;
    }
};