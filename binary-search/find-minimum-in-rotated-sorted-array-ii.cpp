class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=nums[0];
        for(auto it:nums){
            if(it<min){
            min=it;
            break;
            }
        }
        return min;
    }
};