class Solution {
public:
    bool isValid(string word) {
        int n=word.length();
        if(n<3)
        return false;
        int d=0;
        int v=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(iswalnum(word[i])==false)
            return 0;
            if(isdigit(word[i]))
            d++;
            else if(isalpha(word[i])){
                word[i]=tolower(word[i]);
                if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
                v++;
                else
                c++;
            }
        }
        cout<<v<<c;
        if(v>=1 && c>=1)
        return 1;
        return 0;
    }
};