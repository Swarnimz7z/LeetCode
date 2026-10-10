class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> z;
        vector <int> x;
        int n=nums.size();
        for(int i=0;i<n;i++){
            z[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(z[nums[i]]==1)
            x.push_back(nums[i]);
        }
        return x;
    }
};