class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int v=1;
        int x=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                v=v*nums[i];
                x++;
            }
            else{
                v=v*nums[i];
            p=p*nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(x>=2){
                nums[i]=0;
                continue;
            }
            if(nums[i]==0){
                nums[i]=p;
            }
            else{
                nums[i]=v/nums[i];
            }
        }
        return nums;
    }
};