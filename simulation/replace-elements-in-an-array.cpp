class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int> x;
        int n=nums.size();
        for(int i=0;i<n;i++)
        x[nums[i]]=i;
        for(int i=0;i<operations.size();i++){
           int z=x[operations[i][0]];
           nums[z]=operations[i][1];
           x[operations[i][1]]=z;
        }
        return nums;
    }
};