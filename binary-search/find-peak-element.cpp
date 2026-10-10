class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=size(nums);
        int max=nums[0];
        int c=0;
        for(int i=0;i<n;i++){
            if(max<nums[i]){
                max=nums[i];
                c=i;
            }
        }
        return c;
    }
};