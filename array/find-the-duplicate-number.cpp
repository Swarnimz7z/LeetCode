class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> z;
        for(int i=0;i<nums.size();i++){
            z[nums[i]]++;
            if(z[nums[i]]==2){
                return nums[i];
                break;
            }
        }
        return 0;
    }
};