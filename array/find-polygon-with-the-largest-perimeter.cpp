class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long s=nums[0]+nums[1];
        int z=2;
        if(nums[2]>=s && nums.size()==3)
        return -1;
        for(int i=2;i<nums.size();i++){
            if(nums[i]>=s)
            s+=nums[i];
            else{
            s+=nums[i];
            z=i+1;
            }
        }
        cout<<z;
        if(z==2)
        return -1;
        s=0;
        for(int i=0;i<z;i++){
            s+=nums[i];
        }
        return s;
    }
};