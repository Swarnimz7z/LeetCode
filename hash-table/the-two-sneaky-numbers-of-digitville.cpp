class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> x;
        unordered_map<int,int> z;
        for(auto it:nums){
            z[it]++;
        }
        for(auto it:z){
            if(it.second==2)
            x.push_back(it.first);
        }
        return x;
    }
};