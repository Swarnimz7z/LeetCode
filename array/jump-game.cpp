class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int x=1;
        int z=0;
        for(int i=0;i<n;i++){
            z=max(z,i+nums[i]);
            if(z==n-1)
            return 1;
            if(i>=z)
            return 0;
        }
        return x;
    }
};