class Solution {
public:
    int beautySum(string s) {
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++){
            int x=INT_MIN;
            char v=s[i];
            unordered_map<char,int> z;
            for(int j=i;j<n;j++){
                int y=INT_MAX;
                z[s[j]]++;
                x=max(z[s[j]],x);
                for(auto it:z){
                    y=min(it.second,y);
                }
            if(x-y!=0)
            c+=(x-y);
            }
        }
        return c;
    }
};