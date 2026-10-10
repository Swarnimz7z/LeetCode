class Solution {
public:
    int nextBeautifulNumber(int n) {
        while(true){
            n++;
            string s=to_string(n);
            map<int,int> x;
            int z=0;
            int y=0;
            for(auto it:s){
                int v=it-'0';
                x[v]++;
                if(x[v]>v){
                z=1;
                break;
                }
                if(x[v]==v)
                y++;
            }
            if(z)
            continue;
            if(y==x.size())
            return n;
        }
        return n;
    }
};