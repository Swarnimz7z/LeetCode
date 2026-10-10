class Solution {
public:
    bool reorderedPowerOf2(int n) {
        unordered_map<char,int> z;
        string s=to_string(n);
        int c=s.length();
        for(auto it:s)
        z[it]++;
        for(int i=1;i<=pow(10,9);i*=2){
            s=to_string(i);
            int k=s.length();
            if(k==c){
                unordered_map<char,int> v;
                for(auto it:s)
                v[it]++;
                if(v==z)
                return true;
            }
        }
        return false;
    }
};