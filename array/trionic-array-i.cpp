class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p=1;
        int q=0;
        int t=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(i>1)
            break;
            while(i<n && nums[i]>nums[i-1])
            i++;
            p=i-1;
            while(i<n && nums[i]<nums[i-1])
            i++;
            q=i;
            while(i<n && nums[i]>nums[i-1])
            i++;
            t=i;
        }
        if(p>=1 && q>p && t>q && t==n)
        return true;
        return 0;
    }
};