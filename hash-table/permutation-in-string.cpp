class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> x;
        for(auto it:s1){
            x[it]++;
        }
        int n=s1.length();
        for(int i=0;i<s2.length();i++){
            int z=0;
            string s=s2.substr(i,n);
            unordered_map<char,int> v;
            for(auto it:s){
                v[it]++;
            }
            for(auto it:s){
                if(v[it]==x[it])
                z++;
            }
            if(z==n)
            return true;
        }
        return false;
    }
};