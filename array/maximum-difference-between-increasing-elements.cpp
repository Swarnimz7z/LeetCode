class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min=nums[0];
        int max=-1;
        int x=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<=min){
            min=nums[i];
            x=i;
            }
            if(nums[i]-min>=max && i>x)
            max=nums[i]-min;
        }
        return max;
    }
};