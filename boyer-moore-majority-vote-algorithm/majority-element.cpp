class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        unordered_map<int,int> z;
        for(int i=0;i<size(nums);i++){
            z[nums[i]]+=1;
        }
        int n=nums.size();
        for(auto it:z){
            cout<<it.first<<":"<<it.second<<endl;
            if(it.second>n/2){
            n=it.first;
            break;
            }
        }
        return n;
        
    }
};