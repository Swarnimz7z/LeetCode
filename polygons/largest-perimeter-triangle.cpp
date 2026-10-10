class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=0;
        for(int i=0;i<nums.size()-2;i++){
            int s=nums[i]+nums[i+1];
            if(s>nums[i+2]){
            s=s+nums[i+2];
            if(s>=max)
            max=s;
            }
        }
        return max;
    }
};