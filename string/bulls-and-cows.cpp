class Solution {
public:
    string getHint(string secret, string guess) {
        int n=guess.length();
        int x=0;
        int y=0;
        unordered_map<char,int> z;
        unordered_map<char,int> v;
     for(int i=0;i<n;i++){
        if(guess[i]==secret[i]){
        x++;
        guess[i]='_';
        secret[i]='_';
        continue;
        }
        z[secret[i]]++;
        v[guess[i]]++;
     }
     for(int i=0;i<n;i++){
        if(v[secret[i]]>=1){
        y+=min(z[secret[i]],v[secret[i]]);
        v[secret[i]]=0;
        }
     }
     return to_string(x)+"A"+to_string(y)+"B";
    }
};