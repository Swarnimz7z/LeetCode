class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> x(n,0);
        vector<int> y(n,0);

        for(int i=1;i<n;i++){
            x[i]=nums[i-1]+x[i-1];
            y[n-i-1]+=nums[n-i]+y[n-i];
        }

        for(int i=0;i<n;i++){
            nums[i]=abs(x[i]-y[i]);
        }
        return nums;
    }
};