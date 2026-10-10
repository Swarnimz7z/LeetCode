class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        for(int i=n-1;i>=0;i--){
            while(nums[i]){
                v.insert(v.begin(),nums[i]%10);
                nums[i]/=10;
            }
        }
        return v;
    }
};