class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int min=pow(-11,4);
        int n=nums.size();
        int z=k;
        sort(nums.begin(),nums.end());
        return nums[n-k];
        
    }
};