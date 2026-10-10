class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int v=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=0){
                int x=nums[i]%10;
                if(x==digit)
                v++;
                nums[i]/=10;
            }
        }
        return v;
    }
};