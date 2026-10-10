class Solution {
public:
    string reverseVowels(string s) {
        stack<char> x;
        int n=s.length();
        for(auto it:s){
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'||it=='A'||it=='E'||it=='I'||it=='O'||it=='U')
            x.push(it);
        }
        for(int i=0;i<n;i++){
            char it=s[i];
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'||it=='A'||it=='E'||it=='I'||it=='O'||it=='U'){
                s[i]=x.top();
                x.pop();
            }
        }
        return s;
    }
};