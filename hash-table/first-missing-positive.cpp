class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        long z=1;
        unordered_map<int,int> y;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=z)
            z=nums[i];
            y[nums[i]]++;
        }
        int x=0;
        for(long i=1;i<=z+1;i++){
            if(!y[i]){
                x=i;
                break;
            }
        }
        return x;

    }
};