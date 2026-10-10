class Solution {
public:
    long long maxScore(vector<int>& nums) {
        long z=0;
        if(nums.size()==1)
        return nums[0]*nums[0];
        for(int i=0;i<=nums.size();i++){
            long v=nums[i%nums.size()];
            long x=v;
            for(int j=0;j<nums.size();j++){
                
                if(j+1==i)
                continue;
                x=lcm(x,nums[j]);
                v=gcd(v,nums[j]);
            }
            z=max(z,x*v);
        }
        return z;
    }
};