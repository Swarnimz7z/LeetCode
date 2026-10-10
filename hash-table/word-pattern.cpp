class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> z;
        map<string,int> x;
        int n=pattern.size();
        s+=" ";

        for(int i=0;i<n;i++){
            int pos=s.find(" ");
  
            if(pos==-1)
            return false;

            if(z[pattern[i]].empty() && x[s.substr(0,pos)]==0){
            z[pattern[i]]=s.substr(0,pos);
            x[s.substr(0,pos)]=pattern[i];
            }

            if(z[pattern[i]]!=s.substr(0,pos)||x[s.substr(0,pos)]!=pattern[i])
            return false;

            s=s.substr(pos+1);
        }
        if(s.size())
        return false;

        return true;
    }
};