class Solution {
public:
    int countOdds(int low, int high) {
        int c=0;
        if(low%2==1 || high%2==1){
            c=(high-low)/2+1;
        }
        else if(low%2!=1 || high%2!=1){
            c=(high-low)/2;
        }
        else{
            c=(high-low)/2+2;
        }
        return c;
    }
};