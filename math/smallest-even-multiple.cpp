class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i=1;
        while(n%2!=0){
            n=n*i;
            i++;
        }
        return n;
    }
};