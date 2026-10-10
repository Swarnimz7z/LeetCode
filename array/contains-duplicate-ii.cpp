class Solution {
public:

    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> x;
        for(int i=1;i<n+1;i++){
            if(x[nums[i-1]]==0)
            x[nums[i-1]]=i;
            else{
                if(abs(x[nums[i-1]]-i)<=k)
                return true;
                x[nums[i-1]]=i;
            }
        }
        return false;
    }
};