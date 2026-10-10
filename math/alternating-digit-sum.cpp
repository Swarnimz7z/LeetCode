class Solution {
public:
    int alternateDigitSum(int n) {
        int s=0;
        string z=to_string(n);
        reverse(z.begin(),z.end());
        n=stoi(z);
        while(n!=0){
            s=s+n%10;
            n=n/10;
            s=s-n%10;
            n=n/10;
        }
        return s;
    }
};