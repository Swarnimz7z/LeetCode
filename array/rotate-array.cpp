class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> num=nums;
        int n=nums.size();
        k=k%n;
        for(int z=0;z<n;z++){
            nums[z]=num[(n-k+z)%n];
        }
    }
};