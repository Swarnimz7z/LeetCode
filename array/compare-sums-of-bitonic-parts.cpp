class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int i=0;
        long long s=0;
        long long x=0;
        while(nums[i]<nums[i+1])
        {
            s+=nums[i];
            i++;
        }
        s+=nums[i];
        while(i+1!=nums.size() && nums[i]>nums[i+1])
        {
            x+=nums[i];
            i++;
        }
        x+=nums[i];

        if(s>x)
        return 0;
        else if(x>s)
        return 1;
        else
        return -1;
    }
};