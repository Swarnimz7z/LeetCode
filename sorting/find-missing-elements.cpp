class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        map<int,int> z;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(auto it:nums){
            z[it]++;
            mini=min(mini,it);
            maxi=max(maxi,it);
        }
        vector<int> v;
        int n=nums.size();
        for(int i=mini;i<=maxi;i++){
            if(!z[i]){
                v.push_back(i);
            }
        }
        return v;
    }
};