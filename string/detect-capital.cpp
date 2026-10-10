class Solution {
public:
    bool detectCapitalUse(string word) {
        int x=0;
        int y=0;
        int n=word.length();
        if(word[0]>=65 && word[0]<=90){
            x++;
            for(int i=1;i<n;i++){
                if(word[i]>=65 && word[i]<=90)
                x++;
                if(word[i]>=97 && word[i]<=122)
                y++;
            }
            cout<<x;
            cout<<y;
            if(x==n||y==n-1)
            return 1;
            else
            return 0;
        }
        for(int i=0;i<n;i++){
            if(word[i]>=97 && word[i]<=122)
            y++;
        }
        if(y==n)
        return 1;
        return 0;
    }
};