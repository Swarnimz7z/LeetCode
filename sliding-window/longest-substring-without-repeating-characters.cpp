class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int m=min(n,100);
        if(n==0)
        return 0;
        int max=1;
        for(int i=0;i<n-1;i++){
            int c=1;
            unordered_map<char,int> z;
            z[s[i]]++;
            for(int j=i+1;j<m;j++){
                if(z[s[j]]==1){
                break;
                }
                c++;
                z[s[j]]++;
                if(c>=max){
                max=c;
                }
            }
        }
        return max;
    }
};