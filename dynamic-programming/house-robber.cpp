class Solution {
public:
    int solve(vector<int>& nums){
        int prev2=0;
        int prev1=nums[0];
        for(int i=1;i<nums.size();i++){
            int inc=prev2+nums[i];
            int exc=prev1+0;
            int ans=max(inc,exc);
            prev2=prev1;
            prev1=ans;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n);
        int x=solve(nums);
        return x;
    }
};