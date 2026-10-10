class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> x;
        vector<string> z;
        int n=strs.size();
        for(auto it:strs){
            sort(it.begin(),it.end());
            z.push_back(it);
        }
        for(int i=0;i<n;i++){
            if(strs[i]=="X")
            continue;
            vector<string> s;
            s.push_back(strs[i]);
            for(int j=i+1;j<n;j++){
                if(strs[j]=="X")
                continue;
                if(z[i]==z[j]){
                s.push_back(strs[j]);
                strs[j]="X";
                }
            }
            x.push_back(s);
        }
        // for(int i=0;i<n;i++){
        //     if(strs[i]=="A")
        //     continue;
        //     vector<string> v;
        //     v.push_back(strs[i]);
        //     for(int j=i+1;j<n;j++){
        //         if(strs[i].length()!=strs[j].length())
        //         continue;
        //         unordered_map<char,int> s;
        //         unordered_map<char,int> l;
        //         for(int k=0;k<strs[i].length();k++){
        //             s[strs[i][k]]++;
        //             l[strs[j][k]]++;
        //         }
        //         if(l==s){
        //         v.push_back(strs[j]);
        //         strs[j]="A";
        //         }
        //     }
        //     x.push_back(v);
        // }
        return x;
    }
};