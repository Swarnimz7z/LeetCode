class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        string s1=s;
        string s2=s;
        int a=0;
        int b=0;
        int n=s.length();
        while(s[a]=='9'){
            a++;
        }
        while(s[b]=='1'||s[b]=='0'){
            b++;
        }
        for(int i=0;i<n;i++){
            if(s1[i]==s1[a])
            s[i]='9';
        }
        for(int i=0;i<n;i++){
            if(s1[i]==s1[b]){
                if(b==0){
                s2[i]='1';
                }
                else{
                s2[i]='0';
                }
            }
        }
        int x=stoi(s);
        int y=stoi(s2);
        return x-y;

    }
};