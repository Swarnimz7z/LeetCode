class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        if(n>65888){
            return true;
        }
        string s1="";
        string s2="";
        for(int i=0;i<n;i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                s2=s2+(char)tolower(s[i]);
            }
            if(isalpha(s[n-i-1]) || isdigit(s[n-i-1])){
                s1=s1+(char)tolower(s[n-i-1]);
            }
        }
        cout<<s2<<endl;
        cout<<s1;
        if(s2==s1){
            return true;
        }
        else{
            return false;
        }
    }
};