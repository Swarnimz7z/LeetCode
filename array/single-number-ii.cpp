class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){
            if(count[nums[i]]==0){
                count[nums[i]]=1;
            }
            else{
                count[nums[i]]=count[nums[i]]+1;
            }
        }    
        for(auto it:count){
            if(it.second==1){
                x=it.first;
            }
        }
        return x;
    }
};