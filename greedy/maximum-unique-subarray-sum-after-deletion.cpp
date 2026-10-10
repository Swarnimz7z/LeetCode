class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int> z;
        int s=0;
        int v=INT_MIN;
        sort(nums.begin(),nums.end(),[](int a,int b){
            return a>b;
        });
        if(nums[0]<0)
        return nums[0];
        for(auto it:nums){
            if(it<0)
            break;
            if(z[it]==0)
            s+=it;
            z[it]++;
        }
        return s;
    }
};