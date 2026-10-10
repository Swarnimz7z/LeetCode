class Solution {
public:
    long long smallestNumber(long long num) {
        int x=0;
        if(num<0){
        num=-1*num;
        x=1;
        }
        string s=to_string(num);
        int n=s.length();
        if(x)
        sort(s.begin(),s.end(),greater<char>());
        else
        sort(s.begin(),s.end());
        long long z=stol(s);
        string y=to_string(z);
        int m=y.length();
        n=n-m;
        string v="";
        for(int i=0;i<n;i++){
            v=v+"0";
        }
        if(x)
        y=y+v;
        else
        y=y.substr(0,1)+v+y.substr(1,m);
        z=stol(y);
        if(x)
        z=z*-1;
        return z;
    }
};