class Solution {
public:
    void sum(vector<int>& nums){
        if(nums.size()==1)
        return;
        for(int i=0;i<nums.size()-1;i++){
            nums[i]=(nums[i]+nums[i+1])%10;
        }
        nums.erase(nums.begin()+nums.size()-1);
        sum(nums);
    }
    int triangularSum(vector<int>& nums) {
        sum(nums);
        return nums[0]%10;
    }
};