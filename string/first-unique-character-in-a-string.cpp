class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int> x;
        s=" "+s;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(x[s[i]]==0 && s[i]!=s[0])
            x[s[i]]=i;
            else
            x[s[i]]=-1;
        }
        int max=INT_MAX;
        for(auto it:x){
            if(it.second>-1)
            max=min(it.second,max);
        }
        if(max==INT_MAX)
        return -1;
        return max-1;
    }
};