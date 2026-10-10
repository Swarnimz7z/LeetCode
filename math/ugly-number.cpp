class Solution {
public:
    bool isUgly(int n) {
        int num=n;
        for(int i=2;i<6 && num;i++){
                while(n%i==0)
                n/=i;
            }
        if(n!=1)
        return false;
        return true;
    }
};