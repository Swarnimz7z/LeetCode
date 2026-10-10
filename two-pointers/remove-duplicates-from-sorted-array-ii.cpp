class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> x;
        int c=0;
        for(int i=0;i<n-2;i++){
            if(nums[i]==nums[i+2]){
            x.push_back(i+2);
            c++;
            }
        }
        for(int i=0;i<x.size();i++){
            nums[x[i]]=10001;
        }
        sort(nums.begin(),nums.end());
        return n-c;

    }
};