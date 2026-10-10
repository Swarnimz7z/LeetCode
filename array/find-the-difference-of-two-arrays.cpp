class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> x;
        x.resize(2);
        unordered_map<int,int> y;
        unordered_map<int,int> z;
        for(auto it:nums1){
            z[it]++;
        }
        for(auto it:nums2){
            y[it]++;
        }
        for(auto it:y){
            if(z[it.first]==0)
            x[1].push_back(it.first);
        }
        for(auto it:z){
            if(y[it.first]==0)
            x[0].push_back(it.first);
        }
        return x;
    }
};