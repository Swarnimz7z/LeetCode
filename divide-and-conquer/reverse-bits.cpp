class Solution {
public:
    int reverseBits(int n) {
        string s=to_string(n);
        int x=30;
        int z=0;
        while(n!=0){
            int c=pow(2,x);
            z=z+c*(n%2);
            cout<<n%2;
            n=n/2;
            x--;
        }
        return z*2;
    }
};