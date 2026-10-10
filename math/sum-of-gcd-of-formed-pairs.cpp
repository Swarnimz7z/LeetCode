class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> x(n,1);
        int v=nums[0];

        for(int i=0;i<n;i++){
            v=max(v,nums[i]);
            x[i]=gcd(nums[i],v);
        }

        sort(x.begin(),x.end());

        long long z=0;
        for(int i=0;i<n/2;i++){
            z+=gcd(x[i],x[n-i-1]);
        }

        return z;

    }
};