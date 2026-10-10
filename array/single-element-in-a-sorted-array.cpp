class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int c=0;
        unordered_map<int,int> z;
        for(int i=0;i<size(nums);i++){
            z[nums[i]]+=1;
        }
        int n=0;
        for(auto it:z){
            if(it.second==1){
            n=it.first;
            }
        }
        return n;
    }
};