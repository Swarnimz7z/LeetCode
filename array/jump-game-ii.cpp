class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        int z=0;
        int s=0;
        if(n==1)
        return 0;
        for(int i=0;i<n-1;i++){
            x=max(x,i+nums[i]);
            if(i==z){
                z=x;
                s++;
            }
        }
        return s;
    }
};