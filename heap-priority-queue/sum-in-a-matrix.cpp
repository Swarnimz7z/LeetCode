class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        sort(nums[i].begin(),nums[i].end());
        int m=nums[0].size();
        int sum=0;
        for(int i=m-1;i>=0;i--){
            int z=0;
            for(int j=0;j<n;j++){
                z=max(z,nums[j][i]);
            }
            sum+=z;
        }
        return sum;
    }
};