class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int c=0;
        string s=to_string(num);
        for(int i=0;i+k<=s.length();i++){
            string s1=s.substr(i,k);
            if(stoi(s1)!=0){
            if(num%(stoi(s1))==0){
                c++;
                cout<<s1<<endl;
            }
            }
        }
        return c;
    }
};