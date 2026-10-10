class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=1;
        int y=0;
        for(int i=0;i<n;i++){
            if((nums[i]-nums[y])>k){
                y=i;
                c++;
            }
        }
        return c;
    }
};