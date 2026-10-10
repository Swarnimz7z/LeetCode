class Solution {
public:
    bool isHappy(int n) {
        int s=0;
        int m=n;
        int x;
        while(n!=0){
            int x=n%10;
            s=s+pow(x,2);
            n=n/10;
        }     
        if(s>9 || s==7){
            x=isHappy(s);
        }
        else if(s<=9 && s>1 && s!=7){
            return 0;
        }
        else if(s==1){
            return 1;
        }
    return x;
    }
};