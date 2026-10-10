class Solution {
public:
    int minElement(vector<int>& nums) {
        int c=INT_MAX;
        for(auto it:nums){
            int s=0;
            while(it!=0){
                s+=it%10;
                it/=10;
            }
            c=min(c,s);
        }
        return c;
    }
};