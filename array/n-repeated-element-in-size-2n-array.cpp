class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> x;
        for(auto it:nums){
            x[it]++;
            if(x[it]==2)
            return it;
        }
        return 0;
    }
};