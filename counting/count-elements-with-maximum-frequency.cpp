class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> x;
        int z=INT_MIN;
        int v=0;

        for(auto it:nums){
        x[it]++;
        z=max(z,x[it]);
        }

        for(auto it:x){
            if(it.second==z)
            v+=it.second;
        }

        return v;

    }
};