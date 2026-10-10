class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int n=nums.size();
    int maxnum=nums[0];
    int res=nums[0];
    for(int i=1;i<n;i++){
        maxnum=max(maxnum+nums[i],nums[i]);
        res=max(maxnum,res);
    }
    return res;  
    }
};