class Solution {
public:
    int solve(vector<int>& nums,int z,int n){
        int prev2=0;
        int prev1=nums[z];
        for(int i=z+1;i<n;i++){
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
        if(n==1)
        return nums[0];
        int x=solve(nums,1,n);
        int y=solve(nums,0,n-1);
        return max(x,y);
    }
};
