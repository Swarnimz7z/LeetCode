class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int v=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=i;j<n;j++){
                if(nums[j]==target)
                c++;
                if(c>(j-i+1)/2)
                v++;
            }
        }
        return v;
    }
};