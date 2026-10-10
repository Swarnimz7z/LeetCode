class Solution {
public:
    int mirrorDistance(int n) {
        int s=0;
        int m=n;
        while(n){
            s=s*10+n%10;
            n/=10;
        }
        cout<<s;
        return abs(s-m);
    }
};