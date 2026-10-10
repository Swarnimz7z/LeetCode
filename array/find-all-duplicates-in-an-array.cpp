class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> x;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int z=abs(nums[i]);
            if(nums[n-z]<0)
            x.push_back(z);
            else
            nums[n-z]=-1*nums[n-z];
        }
        return x;
    }
};