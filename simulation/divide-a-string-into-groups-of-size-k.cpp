class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n=s.length();
        int x=n%k;
        if(x!=0)
        x=k-x;
        string z="";
        for(int i=0;i<x;i++)
        z=z+fill;
        s=s+z;
        n=s.length();
        vector<string> v;
        for(int i=0;i<n;i+=k){
            string c=s.substr(i,k);
            v.push_back(c);
        }
        return v;
    }
};