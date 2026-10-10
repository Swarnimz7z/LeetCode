class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n=s.length();
        int v=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int> x;
            for(int j=i;j<n;j++){
                x[s[j]]++;
                if(x[s[j]]==k){
                    v+=n-j;
                    break;
                }
            }
        }
        return v;
    }
};