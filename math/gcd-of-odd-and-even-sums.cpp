class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int even=0;
        int odd=0;
        for(int i=1;i<=n;i++){
        even+=i*2;
        odd+=i*2-1;
        }
        return gcd(odd,even);
    }
};