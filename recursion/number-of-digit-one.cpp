class Solution {
public:
    int factorial(int n){
        if(n==0)
        return 1;
        return n*factorial(n-1);
    }
    int countDigitOne(int n) {
        int countr = 0;
    for (long long i = 1; i <= n; i *= 10) {
        long long divider = i * 10;
        countr += (n / divider) * i + min(max(n % divider - i + 1, 0LL), i);
    }
    return countr;
    }
};