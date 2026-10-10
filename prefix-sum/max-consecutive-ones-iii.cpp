class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j=0;
        int z=0;
        int len=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==0)
            z++;
            while(z>k){
            if(nums[j]==0)
            z--;
            j++; 
            }
            len=max(len,i-j+1);
        }
        return len;
    }
};