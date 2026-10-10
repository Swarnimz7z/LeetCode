class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> x;
        unordered_map<int,int> z;
        for(auto it:friends){
            z[it]++;
        }
        for(auto it:order){
            if(z[it]!=0)
            x.push_back(it);
        }
        return x;
    }
};