class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int s=0;
        for(auto it:nums){
            if(it%2==0)
            s=s|it;
        }
        return s;
    }
};