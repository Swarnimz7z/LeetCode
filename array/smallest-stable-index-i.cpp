class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> x(n,INT_MIN);
        vector<int> y(n,INT_MAX);
        x[0]=nums[0];
        y[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            x[i]=max(x[i-1],nums[i]);
            y[n-i-1]=min(y[n-i],nums[n-i-1]);
        }
        int z=INT_MIN;
        for(int i=0;i<n;i++){
            if(x[i]-y[i]<=k)
            return i;
        }
        return -1;
    }
};