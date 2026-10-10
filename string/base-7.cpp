class Solution {
public:
    string convertToBase7(int num) {
        int x=0;
        if(num==0)
        return "0";
        if(num<0){
        x=1;
        num=num*-1;
        }
        string s="";
        while(num!=0){
            int x=num%7;
            s=to_string(x)+s;
            num=num/7;
        }
        if(x)
        s="-"+s;
        return s;
    }
};