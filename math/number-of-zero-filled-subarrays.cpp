class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long c=0;
        long x=0;
        long n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i])
            c=0;
            if(nums[i]==0){
            c++;
            x+=c;
            }
        }
        // if(x==n)
        // return (n*(n+1))/2;
        // for(int i=0;i<n;i++){
        //     int s=0;
        //     for(int j=i;j<n;j++){
        //         if(nums[j])
        //         break;
        //         s=s+nums[j];
        //         if(s==0)
        //         c++;
        //     }
        // }
        return x;
    }
};