class Solution {
public:
    int tribonacci(int n) {
        vector<int> s;
        int x=0;
        int y=1;
        int z=1;
        int w;
        s.push_back(x);
        s.push_back(y);
        s.push_back(z);
        for(int i=3;i<=n;i++){
            w=x+y+z;
            x=y;
            y=z;
            z=w;
            s.push_back(w);
        }
        return s[n];

    }
};