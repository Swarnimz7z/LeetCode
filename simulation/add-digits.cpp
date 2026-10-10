class Solution {
public:
    int addDigits(int num) {
        int s=0;
        int x=0;
        while(num!=0){
            s=s+num%10;
            num=num/10;
        }  
        if(s>=10){
            x=addDigits(s);
        }
        else{
            x=s;
        }
        return x;
    }
};