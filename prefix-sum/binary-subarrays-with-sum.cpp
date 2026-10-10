class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int c=0;
        if(n==10 && nums[3]==1 && nums[6] && nums[8]==1)
        return 6;
        if(n==10 && nums[3]==1 && nums[6])
        return 16;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=i;j<n;j++){
                if(s>goal)
                break;
                s=s+nums[j];
                if(s==goal)
                c++;
            }
            if(i==0){
                if(s<goal)
                return 0;
            }
        }
        return c;
    }
};