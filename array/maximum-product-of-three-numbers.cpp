class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n=nums.size();
        int pro=1;
        int negpro=1;

        pro=nums[n-1]*nums[n-2]*nums[n-3];

        negpro=nums[0]*nums[1];
        
        negpro=max(negpro*nums[2],negpro*nums[n-1]);

        return max(pro,negpro);
    }
};