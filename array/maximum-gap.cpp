class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int max=0;
        int diff=0;
        for(int i=0;i<n-1;i++){
            diff=nums[i+1]-nums[i];
            if(diff>max)
            max=diff;
        }
        return max;
    }
};