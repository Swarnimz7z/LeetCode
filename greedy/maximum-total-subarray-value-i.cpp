class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n=nums.size();
        int x=INT_MIN;
        int y=INT_MAX;

        for(int i=0;i<n;i++){
            x=max(nums[i],x);
            y=min(nums[i],y);
        }

        long long v=x;
        long long z=y;
        long long c=k;
        return c*(v-z);

    }
};