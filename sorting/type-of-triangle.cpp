class Solution {
public:
    string triangleType(vector<int>& nums) {
        string s="isosceles";
        if(nums[0]+nums[1]<=nums[2] || nums[2]+nums[1]<=nums[0] || nums[0]+nums[2]<=nums[1]){
            s="none";
            return s;
        }

        if(nums[0]==nums[1] && nums[0]==nums[2]){
        s="equilateral";
        }
        if(nums[0]!=nums[1] && nums[0]!=nums[2] && nums[1]!=nums[2]){
        s="scalene";
        }
        return s;
    }
};