class Solution {
public:
    int averageValue(vector<int>& nums) {
        int c=0;
        int s=0;
        for(auto it:nums){
            if(it%6==0){
                c++;
                s+=it;
            }
        }
        if(c==0)
        return 0;
        int z=s/c;
        return z;
    }
};