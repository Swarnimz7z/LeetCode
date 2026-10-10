class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        chars.push_back(' ');
        string s="";
        int z=1;
        for(int i=0;i<n;i++){
            if(chars[i]==chars[i+1]){
                z++;
            }
            else{
                if(z==1)
                s=s+chars[i];
                else{
                s=s+chars[i]+to_string(z);
                z=1;
                }
            }
        }
        for(int i=0;i<s.length();i++){
            chars[i]=s[i];
        }
        return s.length();
    }
};