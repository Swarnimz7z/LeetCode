class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int v=nums[0];
        int x=nums[nums.size()-1];
        
        return gcd(x,v);
    }
};