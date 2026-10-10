class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        vector<char> x;
        unordered_map<int,char> z;
        for(int i=0;i<26;i++){
            char v=(i+97);
            z[i]=v;
        }
        int n=s.length();
        long v=0;
        long sum=0;
        for(int i=n-1;i>=0;i--){
           v=shifts[i]%26;
           sum=sum+v;
           char y=s[i];
           int w=s[i]-97;
           w=(w+sum)%26;
           s[i]=z[w];
        }
        return s;
    }
};