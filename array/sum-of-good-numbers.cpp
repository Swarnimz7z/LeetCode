class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(i-k>=0 && i+k<=nums.size()-1){
                if(nums[i]>nums[i-k] && nums[i]>nums[i+k])
                s+=nums[i];
            }
            else if(i-k>=0){
            if(nums[i]>nums[i-k])
            s+=nums[i];
            }
            else if(i+k<=nums.size()-1){
            if(nums[i]>nums[i+k])
            s+=nums[i];
            }
            else{
            s+=nums[i];
            }
        }
        return s;
    }
};