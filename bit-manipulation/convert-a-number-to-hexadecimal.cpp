class Solution {
public:
    string toHex(int num) {
        long n=pow(16,8);
        if(num==0)
        return "0";
        if(num<0)
        n=n+num;
        else
        n=num;
        string s="";
        while(n!=0){
            int x=n%16;
            if(x==10){
                s="a"+s;
                n=n/16;
                continue;
            }
            if(x==11){
                s="b"+s;
                n=n/16;
                continue;
            }
            if(x==12){
                s="c"+s;
                n=n/16;
                continue;
            }
            if(x==13){
                s="d"+s;
                n=n/16;
                continue;
            }
            if(x==14){
                s="e"+s;
                n=n/16;
                continue;
            }
            if(x==15){
                s="f"+s;
                n=n/16;
                continue;
            }
            s=to_string(x)+s;
            n=n/16;
        }
        return s;

    }
};