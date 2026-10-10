class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> x;
        int n=s.length();
        string v="";
        vector<pair<char,int>> z;
        for(int i=0;i<n;i++){
            x[s[i]]++;
        }
        for(auto it:x){
            z.push_back(it);
        }
        sort(z.begin(),z.end(), [](pair<char,int>& a,pair<char,int>& b){
            return a.second>b.second;
        });
        for(auto it:z){
            string c(it.second,it.first);
            v=v+c;
        }
        return v;
    }
};