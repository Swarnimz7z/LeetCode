class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<int> z;
        vector<vector<int>> x(1,z);
        multimap<int,int> v;
        for(int i=0;i<groupSizes.size();i++){
            v.insert({groupSizes[i],i});
        }
        int c=0;
        int w=0;
        for(auto it:v){
            if(w!=it.first){
            x.resize(c+1);
            c++;
            }
            if(x[c-1].size()==it.first){
            c++;
            x.resize(c);
            }
            x[c-1].push_back(it.second);
            w=it.first;
        }
        return x;
    }
};