class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> x;
        unordered_map<int,int> z;
        for(int i=0;i<size(nums);i++){
            z[nums[i]]+=1;
        }
        int n=nums.size();
        for(auto it:z){
            if(it.second>n/3){
                x.push_back(it.first);
            }
        }
        return x;
    }
};