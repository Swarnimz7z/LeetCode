class Solution {
public:
    
    // int Permute(vector<int>&dp,vector<int>&nums,int v){

    //     if(dp[v]!=0)
    //     return dp[v];

    //     for(int i=0;i<nums.size();i++){
    //         if(v-nums[i]>=0)
    //         dp[v]+=Permute(dp,nums,v-nums[i]);
    //     }

    //     return dp[v];
    // }
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> dp(target+1,0);
        dp[0]=1;

        for(int i=1;i<=target;i++){
            for(auto num:nums){
            if(i-num>=0)
            dp[i]+=dp[i-num];
            }
        }
        return dp[target];
    }
};