class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> x=set(nums.begin(),nums.end());
        vector<int> z=vector(x.begin(),x.end());
        int n=x.size();
        if(n<3)
        return z[n-1];
        return z[n-3];
    }
};