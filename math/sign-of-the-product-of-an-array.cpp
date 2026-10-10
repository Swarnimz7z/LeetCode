class Solution {
public:
    int signFunc(int n){
        if(n>0){
            n=1;
        }
        else if(n<0){
            n=-1;
        }
        else{
            n=0;
        }
        return n;
    }
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        long p=1;
        for(int i=0;i<n;i++){
            p=p*(signFunc(nums[i]));
        }
        int product=p;
        return signFunc(product);
    }
};